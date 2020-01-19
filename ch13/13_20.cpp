#include <string>
class HasPtr {
public:
    HasPtr(const std::string &s = ""):ps(new std::string(s)),i(0){}
    HasPtr(const HasPtr &hp) : ps(new std::string(*(hp.ps))),i(hp.i) {}
    HasPtr & operator=(const HasPtr &hp) {
        auto newp = new std::string(*hp.ps);
        delete ps;
        ps = newp;
        i = hp.i;
        return *this;
    }
    ~HasPtr() {
        delete ps;
    }
private:
    std:: string *ps;
    int i;
};
int main() {
    HasPtr p1;
    HasPtr p2("wzh");
    HasPtr p3(p2);
    p1 = p3;
}