#ifndef MANAGER_H
#define MANAGER_H

#include "Person.cpp"
#include <list>
using namespace std;

class Manager{
    list<Person> people;
public:
    bool addPerson(string name, string city, int age);
    bool addPerson(Pessoa *P);
    bool readFile(string fileName);


};


#endif