#include "Manager.hpp"
#include <fstream>
#include <sstream>
#include <string>
#include <regex>
using namespace std;

bool Manager::addPerson(string name, string city, int age){
    if (name.empty() || city.empty() || age < 0) return false;
    Person *newPerson = new Person(name, city, age);
    this->people.push_back(newPerson);
    return true;
}
bool Manager::addPerson(Person *P)
{
    if (P->getName().empty() || P->getCity().empty() || P->getAge() < 0) return false;
    this->people.push_back(P);
    return true;
}

bool Manager::readFile(string fileName){
    fstream file(fileName, ios::in);
    if (!file.is_open()) return false;

    string line, word;
    vector<string> row;

    while (getline(file, line)){

        row.clear();
        stringstream s(line);

        while(getline(s, word, ';')) row.push_back(word);

        // Removing leading and trailing whitespaces
        row[0] = std::regex_replace(row[0], std::regex("^ +| +$|( ) +"), "$1");
        row[1] = std::regex_replace(row[1], std::regex("^ +| +$|( ) +"), "$1");
        row[2] = std::regex_replace(row[2], std::regex("^ +| +$|( ) +"), "$1");

        if(!addPerson(row[0], row[1], stoi(row[2]))) {
            file.close();
            return false;
        };
    }

    file.close();
    return true;
}
void Manager::showPeople(){
    cout << endl;
    for (const auto person : this->people) person->showPerson();
    cout << endl;
}

bool Manager::deletePerson(Person *P){
    list<Person*>::iterator it = find(this->people.begin(), this->people.end(), P);
    if(it != this->people.end()){
        this->people.erase(it);
        return true;
    }else return false;
}

bool Manager::deletePerson(string nome){
    list<Person*>::iterator it;
    for(it = this->people.begin(); it != this->people.end(); it++)
        if((*it)->getName() == nome) break;


    if(it != this->people.end()){
        this->people.erase(it);
        return true;
    }else return false;
}

bool Manager::writeFile(string fileName){
    fstream file()
}