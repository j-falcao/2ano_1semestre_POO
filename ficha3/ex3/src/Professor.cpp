#include "..\\include\\professor.hpp"


Professor::Professor(string city, string name, int age) 
    : AcademicPerson(string city, string name, int age) {}

Professor::Professor(string city, string name, int age, vector<Subjects*> subjects) 
    : AcademicPerson(string city, string name, int age, subjects) {}

Professor::~Professor() {
    cout << "The professor: " << this->BI << " was deleted!\n";
}

virtual void Professor::introduce(){
    cout << "Hi! My name is " << this->name << " and I like teaching!\n";
}