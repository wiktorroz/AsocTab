#include <iostream>

using namespace std;

class Employee{
public:
    string name;
    string position;
    int age;

    Employee(string n = "",string p = "", int a = 0){
        name = move(n);
        position = move(p);
        age = a;
    };

    friend ostream& operator<<(ostream& s, const Employee& emp){
        s << "Name: " << emp.name << "; Position: " << emp.position << "; Age: " << emp.age;
        return s;
    };
};