#include "Manager.hpp"
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <regex>
using namespace std;

bool Manager::addPerson(string name, string city, int age){
    if (name.empty() || city.empty()) return false;
    Person *newPerson = new Person(name, city, age);
    this->people.push_back(newPerson);
    return true;
}

bool Manager::addPerson(Person *P){
    if (P->getName().empty() || P->getCity().empty()) return false;
    this->people.push_back(P);
    return true;
}

bool Manager::readFile(string fileName){
    fstream file(fileName, ios::in);
    if (!file.is_open()) return false;

    string line, word;
    vector<string> row(3);

    while (getline(file, line)){
        row[0].clear(), row[1].clear(), row[2].clear();

        int rowIndex = 0;
        stringstream s(line);
        while(getline(s, word, ';')) row[rowIndex++] = word;

        if(row[0].empty()) return false;
        if(row[1].empty()) return false;
        if(row[2].empty()) row[2] = "18";

        // Removing leading and trailing whitespaces
        row[0] = std::regex_replace(row[0], std::regex("^ +| +$|( ) +"), "$1");
        row[1] = std::regex_replace(row[1], std::regex("^ +| +$|( ) +"), "$1");
        row[2] = std::regex_replace(row[2], std::regex("^ +| +$|( ) +"), "$1");

        int age;
        try{
            age = stoi(row[2]);
        }catch(std::invalid_argument invalid){
            age = 18;
        }

        addPerson(row[1], row[0], age);
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

bool Manager::deletePerson(string name){
    list<Person*>::iterator it;
    for(it = this->people.begin(); it != this->people.end(); it++)
        if((*it)->getName() == name) break;


    if(it != this->people.end()){
        this->people.erase(it);
        return true;
    }else return false;
}

bool Manager::writeFile(string fileName){
    fstream file(fileName, ios::out);
    if(!file.is_open()) return false;

    for(list<Person*>::iterator it = this->people.begin(); it != this->people.end(); it++)
        file << (*it)->getName() << ';' << (*it)->getCity() << ';' << (*it)->getAge() << '\n';

    file.close();
    return true;
}

Person* Manager::searchPerson(string name){
    list<Person*>::iterator it;
    for(it = this->people.begin(); it != this->people.end(); it++)
        if((*it)->getName() == name) break;

    return it != this->people.end() ? *it : nullptr;
}

string Manager::GetMostPopulatedCity(){
    map<string, int> populations;
    for(list<Person*>::iterator it = this->people.begin(); it != this->people.end(); it++) populations[(*it)->getCity()]++;
    

    int biggerPopulation = 0;
    string mostPopulatedCity = "Invalid Input!";
    for(const auto& it: populations){
        if(it.second > biggerPopulation){ 
            biggerPopulation = it.second;
            mostPopulatedCity = it.first;
        }
    }
    
    return mostPopulatedCity;
}

void Manager::deletePeople(){
    for(list<Person*>::iterator it = this->people.begin(); it != this->people.end(); it++)
        delete (*it);
    this->people.erase(this->people.begin(), this->people.end());
}