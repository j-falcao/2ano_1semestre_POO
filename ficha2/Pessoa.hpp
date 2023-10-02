#ifndef PESSOA_H
#define PESSOA_H


#include <iostream>
using namespace std;

class Pessoa{
    string name, city;
    int age;

public:
    Pessoa(string name, string city, int age);
    string getName();
    string getCity();
    int getInt();
};


#endif