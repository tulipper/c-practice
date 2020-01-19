#include <iostream>
#include <vector>
#include <memory>
using std::vector; using std::shared_ptr;
 shared_ptr<vector<int>> make_with_shared() {
	return std::make_shared<vector<int>>();
}
shared_ptr<vector<int>> populate(shared_ptr<vector<int>> isptr) {
	for(int i; std::cout<<"pls enter \n", std::cin>>i; isptr->push_back(i));
	return isptr;

}
std::ostream& print(shared_ptr<vector<int>> isptr) {
	for(const auto i : *isptr) std::cout << i << " ";
	return std::cout;
}
bool b() {
	int* p = new int;
	return p;
}
int main() {
	shared_ptr<vector<int>> isptr = populate(make_with_shared());
	print(isptr) << std::endl;
	return 0;
}