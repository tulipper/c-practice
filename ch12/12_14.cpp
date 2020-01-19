#include <iostream>
#include <string>
#include <memory>
using std::shared_ptr; using std::string;
struct destination {
	string ip;
	int port;
	destination(string _ip, int _port) : ip(_ip), port(_port) {}
};
struct connection {
	string ip;
	int port;
	connection(string _ip, int _port) : ip(_ip), port(_port) {}
};
connection connect(destination &d) {
	std::cout << "connect to " << d.ip << "port " << d.port << std::endl;
	return connection(d.ip, d.port);
}
void disconnect( connection& c) {
	std::cout << "disconnect to " << c.ip << "port " << c.port << std::endl;
}	
void end_connection(connection *p) {
	disconnect(*p);
}
void f(destination &d) {
	connection c = connect(d);
	shared_ptr<connection> p (&c, [](connection* p){disconnect(*p);});
	
	
}
int main() {
	destination dest("127.0.0.1", 5555);
	f(dest);
	return 0;
}