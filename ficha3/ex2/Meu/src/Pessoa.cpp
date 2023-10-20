#include "Person.hpp"


Person::Person(int id, std::string name, int age){
    if(name.empty()) return;

    if(age < 0 || age > 120) age = 18;
    this->id = id;
    this->name = name;
    this->age;
}

Person::~Person(){
    std::cout << "The person: " << this->name << " has been removed.\n";
}

std::string Person::getName(){
    return this->name;
}

int Person::getAge(){
    return this->age;
}
