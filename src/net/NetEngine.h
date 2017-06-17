#include <iostream>
#include <stdlib.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <stdio.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <assert.h>
#include <string.h>
#include <unistd.h>

using namespace std;

#define BUFFER_LENGTH 1024
#define MAX_CONNECT_LIMIT 512

class NetServer{
public:
	int port;
	int sockfd_server;
	int sockfd;
	int fd_temp;

	struct sockaddr_in s_addr_in;
	struct sockaddr_in s_addr_client;
	int client_length;

	NetServer(int port);
	void DataHandler(void* sock_fd);
};
