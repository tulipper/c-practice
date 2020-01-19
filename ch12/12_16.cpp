#include <iostream>
#include <memory>
#include <string>
using std::unique_ptr; using std:: string;
int main() {
	unique_ptr<string> p1(new string("hello"));
	unique_ptr<string>p2(p1);
	unique_ptr<string>p3;
	p2 = p1;
	return 0;
}
	