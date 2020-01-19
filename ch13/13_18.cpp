#include <string>
#include <iostream>
class Employee {
public:
    Employee(const std::string &nm = ""):name(nm),id(unique++) {}
    Employee(const Employee &em) = delete;
    Employee & operator= (const Employee &) = delete;
    int getID() const {
        return id;
    }
    
private:
    std::string name;
    int id;
    static int unique;
};
int Employee::unique = 10;
int main() {
    Employee player1;
    Employee player2("wangzh");
    Employee player3("ljt");
    std::cout << "player1" << player1.getID() << std::endl;
    std::cout << "player2" << player2.getID() << std::endl;
    std::cout << "player3" << player3.getID() << std::endl;
}