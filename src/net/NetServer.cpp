#include "NetEngine.h"

NetServer::NetServer(int port){
	this->port = port;
	
	//this->sockfd_server = socket(AF_INET, SOCK_STREAM, 0);
	//assert(sockfd_server != -1);
}

void NetServer::DataHandler(void* sock_fd){

}
