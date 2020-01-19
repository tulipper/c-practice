#include <string>
#include <iostream>
class HasPtr{
public:
    HasPtr(const std::string &s = std::string()):
        ps(new std::string(s)), i(0) {std::cout << "default constructor"<< std::endl;}
    HasPtr(const HasPtr &hp):ps(new std::string(*(hp.ps))),i(hp.i) {std::cout << "copy constructor" << std::endl;}
    HasPtr& operator=(const HasPtr &rhs) {
        if(this != &rhs) {
            std::string *old_ps = ps;
            ps = new std::string(*(rhs.ps));
            i = rhs.i;
            delete old_ps;
            std::cout << "operator = " << std::endl;
        }
        return *this;
    }
    void print() { std::cout << *ps ;}
private:
    std::string *ps;
    int i;
};