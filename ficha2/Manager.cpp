#include "Manager.hpp"
using namespace std;

bool Manager::addPerson(string name, string city, int age){
    if(name.empty() || city.empty() || age < 0) return false;
    Person newPerson(name, city, age);
    this->people.push_back(newPerson);
    return true;
}
bool Manager::addPerson(Person *P){
    if(P->getName().empty() || P->getCity().empty() || P->getAge() < 0) return false;
    this->people.push_back(P);
}