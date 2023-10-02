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
void showPerson

