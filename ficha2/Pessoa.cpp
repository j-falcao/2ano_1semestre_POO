#include "Pessoa.hpp"
using namespace std;

Pessoa::Pessoa(string name, string city, int age) {
    this->name = name;
    this->city = city;
    this->age = age;
}
string Pessoa::getName() { return this->name; }
string Pessoa::getCity() { return this->city; }
int Pessoa::getInt() { return this->age; }

