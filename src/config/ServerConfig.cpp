#include <iostream>
#include <string.h>
#include <libxml/xpath.h>
#include <libxml/parser.h>
#include <libxml/xmlmemory.h>
#include <libxml/xmlstring.h>
#include <stdlib.h>
#ifdef __GNUC__
#include <ext/hash_map>
#else
#include <hash_map>
#endif
using namespace std;
class ServerConfig{
public:
static ServerConfig *instance;
hash_map<int, Server> ServerDic;
ServerConfig(){instance = this;}
void loadXml(const char *path){
xmlDocPtr pDoc = xmlReadFile(path, "UTF-8", XML_PARSE_RECOVER);
xmlNodePtr pRoot = xmlDocGetRootElement(pDoc);
xmlNodePtr elem = pRoot->xmlChildrenNOde;
while(elem != NULL){
if(xmlStrcmp(elem->name, (const xmlChar *)Server) == 0){
Server *temp = new Server();
temp->parseFrom(elem);
ServerDic[temp->id] = temp;
}
elem = elem->next;
}
};
