#include "Person.hpp"
using namespace std;

Person::Person(string name, string city, int age) {
    this->name = name;
    this->city = city;
    this->age = age;
}
string Person::getName() { return this->name; }
string Person::getCity() { return this->city; }
int Person::getInt() { return this->age; }
void Person::showPerson(){
    cout << "\t\x1B[34mName: \033[0m" << this->name << ' '; // Name
    cout << "\x1B[34mCity: \033[0m" << this->city << ' ';   // City
    cout << "\x1B[34mAge: \033[0m" << this->age << '\n';     // Age
}

