#include "..\\include\\professor.hpp"


Professor::Professor(string city, string name, int age) 
    : AcademicPerson(city, name, age) {}

Professor::Professor(string city, string name, int age, vector<Subject*> subjects) 
    : AcademicPerson(city, name, age) {
        this->subjects = subjects;
    }

Professor::~Professor() {
    cout << "The professor: " << this->BI << " was deleted!\n";
}

void Professor::introduce(){
    cout << "Hi! My name is " << this->name << " and I like teaching!\n";
}