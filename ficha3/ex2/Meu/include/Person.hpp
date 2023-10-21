#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
using namespace std;

class Person{
    static int nextBI = 0;
    string name, city;
    int age, BI;
public:
    Person(string city, string name, int age);
    ~Person();

    string getName();
    string getCity();
    int getAge();
    int getBI();
    void showPerson();
};


#endif