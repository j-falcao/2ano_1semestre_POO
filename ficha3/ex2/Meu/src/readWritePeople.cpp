#include "Person.cpp"
#include <fstream>
#include <vector>
#include <string>
#include <stringstream>

vector<Person> readPeople(string fileName)
{
    fstream file(fileName, ios::in);
    if (!file.is_open())
        return {};

    stringstream line;
    while (getline(file, line)){
        string primeiroNome, cidade;
        int BI;

        line >> primeiroNome >> BI >> cidade;
    }
}
