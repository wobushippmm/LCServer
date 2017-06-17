#include "main.h"

int main(int argc, char* argv[]){
	cout << "Hello linux !" << endl;
	
	NetServer* server = new NetServer(300);
	cout << "Server port " << server->port << endl;

	return 0;
}
