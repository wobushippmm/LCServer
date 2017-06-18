#include "main.h"

int main(int argc, char* argv[]){
	cout << "Hello linux !" << endl;
	
	NetServer* server = new NetServer(300);
	cout << "Server port " << server->port << endl;

	ProtoDef::RpcPo rpc;
	rpc.set_rpc("RpcPo");
	cout << rpc.rpc() << endl;

	return 0;
}
