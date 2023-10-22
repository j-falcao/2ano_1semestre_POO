#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person{
    string name, city;
    static int nextBI;
    const int BI;
    int age;
public:
    Person(string city, string name, int age);
    ~Person();
    Person& operator=(const Person& other);

    string getName();
    void setName(string newName);
    string getCity();
    int getAge();
    int getBI();
    void showPerson();
};


#endif