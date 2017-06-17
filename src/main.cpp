#include "main.h"

int main(int argc, char* argv[]){
	cout << "Hello linux !" << endl;
	
	NetServer* server = new NetServer(100);
	cout << "Server port " << server->port << endl;

	return 0;
}
