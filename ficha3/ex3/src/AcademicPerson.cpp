#include "..\\include\\AcademicPerson.hpp"


AcademicPerson::AcademicPerson(string city, string name, int age) : Person(city, name, age) {}

AcademicPerson::AcademicPerson(string city, string name, int age, vector<Subject*> subjects) : Person(city, name, age) {
    this->subjects = subjects;
}

AcademicPerson::~AcademicPerson(){
    cout << "Academic person: " << this->BI << " was deleted!\n";
}

bool AcademicPerson::addSubject(Subject* newSubject){
    for(const Subject* subject: this->subjects)
        if(*subject == *newSubject) return false;
    this-subjects.push_back(newSubject);
    return true;
}

bool AcademicPerson::delSubject(Subject* subject){
    for(vector<Subject*> it = this->subjects.begin(); it != this->subjects.end(); it++){
        if(*(*it) == *subject){
            this->subjects.erase(it);
            return true;
        }
    }
    return false;
}

void AcademicPerson::showSubjects(){
    cout << endl;
    for(Subject* subject: this->subjects) subject->showSubject();
    cout << endl;
}

virtual void AcademicPerson::introduce(){
    cout << "Hi! My name is " << this->name << " and I like academic stuff!\n";
}