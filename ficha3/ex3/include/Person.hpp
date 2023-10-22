#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person{
    string name, city;
    static int nextBI;
    int age, BI;
public:
    Person(string city, string name, int age);
    ~Person();

    string getName();
    void setName(string newName);
    string getCity();
    int getAge();
    int getBI();
    void showPerson();
};


#endif