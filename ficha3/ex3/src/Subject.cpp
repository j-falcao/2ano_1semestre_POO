#include "..\\include\\Subject.hpp"


int Subject::nextId = 0;

Subject::Subject(string name, string description) : id(Subject::nextId++){
    this->name = name;
    this->description = description;
}

Subject::~Subject(){
    cout << "The subject: " << this->name << " was deleted!\n";
}

const int Subject::getId(){
    return this->id;
}

string Subject::getName(){
    return this->name;
}

void Subject::setName(string newName){
    if(newName.empty()) return;
    this->name = newName;
}

string Subject::getDescription(){
    return this->description;
}

void Subject::setDescription(string newDescription){
    if(newDescription.empty()) return;
    this->description = newDescription;
}

void Subject::showSubject(){
    cout << "\t\x1B[34mSubject id: \033[0m" << this->id << ' ';
    cout << "\x1B[34mSubject name: \033[0m" << this->name << '\n';
}

bool Subject::operator==(const Subject& other) const{
    return this->id == other.id;
}