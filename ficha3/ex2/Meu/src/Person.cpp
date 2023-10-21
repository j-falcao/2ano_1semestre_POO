#include "..\\include\\Person.hpp"


int Person::nextBI = 0;

Person::Person(string city, string name, int age){
    if(name.empty() || city.empty()) return;

    if(age < 0 || age > 120) age = 18;
    this->city = city;
    this->name = name;
    this->age = age;
    this->BI = Person::nextBI++;
}

Person::~Person(){
    cout << "The person: " << this->name << " has been removed.\n";
}

string Person::getName(){
    return this->name;
}

void Person::setName(string newName){
    if(!newName.empty()) this->name = newName;
}

string Person::getCity(){
    return this->city;
}

int Person::getAge(){
    return this->age;
}

int Person::getBI(){
    return BI;
}

void Person::showPerson(){
    cout << "\t\x1B[34mBI: \033[0m" << this->BI << ' ';     // BI
    cout << "\x1B[34mName: \033[0m" << this->name << ' '; // Name
    cout << "\x1B[34mCity: \033[0m" << this->city << ' ';   // City
    cout << "\x1B[34mAge: \033[0m" << this->age << '\n';    // Age
}