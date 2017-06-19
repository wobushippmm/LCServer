#include <iostream>
#include <stdio.h>
#include <libxml/xpath.h>
#include <libxml/parser.h>
#include <libxml/xmlmemory.h>
#include <libxml/xmlstring.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void parseFrom(xmlNodePtr elem, FILE *fp){
	fprintf(fp, "void parseFrom(xmlNodePtr elem){\n");

	// read property
	fprintf(fp, "xmlAttrPtr attrPtr = elem->properties;\n");
	fprintf(fp, "while(attrPtr != NULL){\n");
	fprintf(fp, "xmlChar *attrVal = xmlGetProp(elem, attrPtr->name);\n");
	fprintf(fp, "setField(attrPtr->name, attrVal);\n");
	fprintf(fp, "}\n");

	// read children
	fprintf(fp, "xmlNodePtr node = elem->xmlChildrenNode;\n");
	xmlNodePtr node = elem->xmlChildrenNode;
	while(node != NULL){
		fprintf(fp, "while(node != NULL){\n");
		fprintf(fp, "if(strcmp(node->name, \"%s\"){\n", node->name);
		fprintf(fp, "%s *temp = new %s();\n", node->name, node->name);
		fprintf(fp, "temp.parseFrom(node);\n");
		fprintf(fp, "%sDic[temp->id] = temp;\n", node->name);
		fprintf(fp, "}\n");
	}
	fprintf(fp, "}\n");
}

void codeClass(xmlNodePtr defElem, FILE *fp){
	fprintf(fp, "class %s{\n", defElem->name);
	fprintf(fp, "public:\n");
	fprintf(fp, "%s(){}\n", defElem->name);
	fprintf(fp, "void setField(char *key, char *value){\n");
	
	xmlAttrPtr attrPtr = defElem->properies;
	while(attrPtr != NULL){
		if(strcmp(attrPtr->name, "int") == 0){	
			fprintf(fp, "int %s;\n", attrPtr->name);
		}
		if(strcmp(attrPtr->name, "long") == 0){
			fprintf(fp, "long %s;\n", attrPtr->name);
		}
		if(strcmp(attrPtr->name, "float") == 0){
			fprintf(fp, "float %s;\n", attrPtr->name);
		}
		if(strcmp(attrPtr->name, "double") == 0){
			fprintf(fp, "double %s;\n", attrPtr->name);
		}
		if(strcmp(attrPtr->name, "string") == 0){
			fprintf(fp, "char *%s;\n", attrPtr->name);
		}
		if(strcmp(attrPtr->name, "date") == 0){
			fprintf(fp, "char *%s;\n", attrPtr->name);
		}
	}	

	attrPtr = defElem->properies;
	while(attrPtr != NULL){
		if(strcmp(attrPtr->name, "int") == 0){
			fprintf(fp, "if(strcmp(key, \"%s\") == 0) %s = atoi(value);\n", attrPtr->name);
		}
		if(strcmp(attrPtr->name, "long") == 0){
			fprintf(fp, "if(strcmp(key, \"%s\") == 0) %s = atol(value);\n", attrPtr->name);
		}
		if(strcmp(attrPtr->name, "float") == 0){
			fprintf(fp, "if(strcmp(key, \"%s\") == 0) %s = atof(value);\n", attrPtr->name);
		}
		if(strcmp(attrPtr->name, "double") == 0){
			fprintf(fp, "if(strcmp(key, \"%s\") == 0) %s = strtod(value);\n", attrPtr->name);
		}
		if(strcmp(attrPtr->name, "string") == 0){
			fprintf(fp, "if(strcmp(key, \"%s\") == 0) %s = value;\n", attrPtr->name);
		}
		if(strcmp(attrPtr->name, "date") == 0){
			fprintf(fp, "if(strcmp(key, \"%s\") == 0) %s = value;\n", attrPtr->name);
		}
	}	
	}
}

int main(int argc, char *argv[]){
	char packName[128] = "";
	
	if(argc < 3){
		fprintf(stdout, "tempCreater infile outpath namespace\n"); 
		return 1;
	}

	if(argc > 3){
		strcpy(packName, argv[3]);
	}

	xmlDocPtr pDoc = xmlReadFile(argv[1], "UTF-8", XML_PARSE_RECOVER); // read xml file
	if(pDoc == NULL){
		fprintf(stderr, "Read file %s error : %s %d \n", argv[1], __FUNCTION__, __LINE__);
		return 2;
	}
	
	xmlNodePtr pRoot = xmlDocGetRootElement(pDoc);
	if(pRoot == NULL){
		fprintf(stderr, "Error in %s %d\n", __FUNCTION__, __LINE__);
		xmlFreeDoc(pDoc);
		return 3;
	}

	xmlNodePtr defineElem = pRoot->xmlChildrenNode;
	while(defineElem != NULL){
		if(!xmlStrcmp(defineElem->name, (const xmlChar *)("Define"))){
			xmlNodePtr defElem = defineElem->xmlChildrenNode;

			FILE *fp = NULL;
			char filePath[128] = "";
			sprintf(filePath, "%s/%s.cpp", argv[2], pRoot->name);
			fp = fopen(filePath, "w+");
			
			if(fp == NULL){
				fprintf(stderr, "Open file error %s\n", filePath);
				return 4;
			}

			// create cpp class
			fprintf(fp, "#include <iostream>\n");
			fprintf(fp, "#include <string.h>\n");
			fprintf(fp, "#include <hash_map>\n");
			fprintf(fp, "using namespace std;\n");
			fprintf(fp, "class %s{\n", pRoot->name);
			fprintf(fp, "pulbic:\n");
			fprintf(fp, "static %s *instance;\n", pRoot->name);
			fprintf(fp, "hash_map<int, %s> %sDic;\n", defElem->name, defElem->name); 
			fprintf(fp, "%s(){instance = this;}\n", defElem->name);

			// class
			codeClass(defElem, fp);

			// load
			fprintf(fp, "void loadXml(const char *path){\n");
			fprintf(fp, "xmlDocPtr pDoc = xmlReadFile(path, \"UTF-8\", XML_PARSE_RECOVER);\n");
			fprintf(fp, "xmlNodePtr pRoot = xmlDocGetRootElement(pDoc);\n");
			fprintf(fp, "xmlNodePtr elem = pRoot->xmlChildrenNOde;\n");
			fprintf(fp, "while(elem != NULL){\n");
			fprintf(fp, "if(strcmp(elem->name, %s) == 0){\n", defElem->name);
			fprintf(fp, "%s *temp = new %s();\n", defElem->name, defElem->name);
			fprintf(fp, "temp->parseFrom(elem);\n");
			fprintf(fp, "%sDic[temp->id] = temp;\n");
			fprintf(fp, "}\n");

			fprintf(fp, "elem = elem->next;\n");	
			fprintf(fp, "}\n");
			// end
			fprintf(fp, "};\n");
			
			fprintf(stderr, "Save cpp file %s\n", filePath);	
			fclose(fp);
			break;
		}
		defineElem = defineElem->next;
	}
}
