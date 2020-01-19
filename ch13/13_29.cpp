#include <string>
#include <iostream>
#include <vector>
#include <al
class HasPtr {
    friend void swap(HasPtr &lhs, HasPtr &rhs);
public:
    HasPtr(const std::string &s = std::string()):ps(new std::string(s)),i(0){}
    HasPtr(const HasPtr &hp) : ps(new std::string(*(hp.ps))),i(hp.i) {}
    HasPtr & operator=(HasPtr hp) {
        swap(*this, hp);
        return *this;
    }
    bool operator<(const HasPtr &hp) {
        return ps->length() < hp.ps->length();
    }
    ~HasPtr() {
        delete ps;
    }
private:
    std:: string *ps;
    int i;
};
inline void swap(HasPtr &lhs, HasPtr &rhs) {
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
    std::cout << "swap execute" << std::endl;
}
int main() {
    HasPtr hp1("dad");
    HasPtr hp2("wangzh");
    HasPtr hp3("dadfafda");
    HasPtr hp5;
    HasPtr hp4 ("a");
    std::vector<HasPtr> vh;
    vh.push_back(hp1);
    vh.push_back(hp2);
    vh.push_back(hp3);
    vh.push_back(hp4);
    vh.push_back(hp5);
    
}
