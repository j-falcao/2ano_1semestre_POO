#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person{
    string name, city;
    int age;

public:
    Person(string name, string city, int age);
    string getName();
    string getCity();
    int getInt();
    void showPerson();
};


#endif