#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person{
    static int nextBI;
protected:
    string name, city;
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
    virtual void introduce();
};


#endif