#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
using namespace std;

class Person{
    string name, city;
    int age;
public:
    Person(string city, string name, int age);
    ~Person();

    string getName();
    string getCity();
    int getAge();
    void showPerson();
};


#endif