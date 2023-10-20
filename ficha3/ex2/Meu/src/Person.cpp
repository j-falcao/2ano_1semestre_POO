#include "..\\include\\Person.hpp"


Person::Person(string city, string name, int age){
    if(name.empty() || city.empty()) return;

    if(age < 0 || age > 120) age = 18;
    this->city = city;
    this->name = name;
    this->age = age;
}

Person::~Person(){
    std::cout << "The person: " << this->name << " has been removed.\n";
}

string Person::getName(){
    return this->name;
}

string Person::getCity(){
    return this->city;
}

int Person::getAge(){
    return this->age;
}

void Person::showPerson(){
    std::cout << "\t\x1B[34mName: \033[0m" << this->name << ' '; // Name
    std::cout << "\x1B[34mCity: \033[0m" << this->city << ' ';   // City
    std::cout << "\x1B[34mAge: \033[0m" << this->age << '\n';    // Age
}