#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

class Person{
    int id;
    std::string name;
    int age;
public:

    Person(int id, std::string name, int age);
    ~Person();

    int getId();
    std::string getName();
    int getAge();
};




#endif