#include <iostream>
#include <vector>
using std::vector;
vector<int>* make_dynamically() {
	return new vector<int>;
}
vector<int>* populate(vector<int>* ivec) {
	for(int i; std::cout<<"Pls Enter:\n", std::cin >> i; ivec->push_back(i));
	return ivec;
}
std::ostream& print(vector<int>* ivec) {
	for(const auto i : *ivec) std:: cout << i << " " ;
	//std:: cout << std::endl;
	return std::cout;
}
int main() {
	vector<int>* ivec = populate(make_dynamically());
	print(ivec) << std::endl;
	delete ivec;
	return 0;
}