#include <iostream>
#include <memory>
using std::shared_ptr;
void process(shared_ptr<int> ptr) {
	std::cout << "inside the process function, the use count: " << ptr.use_count() << std::endl;
}
int main() {
	{
		auto sp = std::make_shared<int>();
		auto p = sp.get();
		if(!sp) std::cout << "sp is null " << std::endl;
		if(!p) 
			std::cout << "p is null" << std::endl;
		else 
			std:: cout << p << *p << std::endl;
		
		delete p;
	}
    return 0;
}