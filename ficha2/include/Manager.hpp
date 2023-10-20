#ifndef MANAGER_H
#define MANAGER_H

#include "Person.cpp"
#include <list>
using namespace std;

class Manager{
    list<Person*> people;
public:
    bool addPerson(string name, string city, int age);
    bool addPerson(Person *P);
    bool readFile(string fileName);
    void showPeople();
    bool deletePerson(Person *P);
    bool deletePerson(string name);
    bool writeFile(string fileName);
    Person* searchPerson(string name);
    string GetMostPopulatedCity();
    void deletePeople();
};


#endif