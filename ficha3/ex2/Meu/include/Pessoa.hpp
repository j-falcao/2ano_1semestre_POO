#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

class Person{
    std::string name;
    int age;
public:

    Person(int id, std::string name, int age);
    ~Person();

    std::string getName();
    int getAge();
};


#endif