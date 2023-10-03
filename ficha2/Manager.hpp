#ifndef MANAGER_H
#define MANAGER_H

#include "Person.cpp"
#include <list>
#include <vector>
#include <map>
using namespace std;

class Manager{
    list<Person*> people;
public:
    bool addPerson(string name, string city, int age);
    bool addPerson(Person *P);
    bool readFile(string fileName);
    void showPeople();
    bool deletePerson(Person *P);
};


#endif