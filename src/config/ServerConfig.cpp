#include <iostream>
#include <string.h>
#include <hash_map>
using namespace std;
class ServerConfig{
pulbic:
static ServerConfig *instance;
hash_map<int, text> textDic;
ServerConfig(){instance = this;}
void loadXml(const char *path){
xmlDocPtr pDoc = xmlReadFile(path, "UTF-8", XML_PARSE_RECOVER);
xmlNodePtr pRoot = xmlDocGetRootElement(pDoc);
xmlNodePtr elem = pRoot->xmlChildrenNOde;
while(elem != NULL){
if(xmlStrcmp(elem->name, (const xmlChar *)text) == 0){
text *temp = new text();
temp->parseFrom(elem);
textDic[temp->id] = temp;
}
elem = elem->next;
}
};
