#include "..\\include\\Student.hpp"


Student::Student(string city, string name, int age) 
    : AcademicPerson(string city, string name, int age) {}

Student::Student(string city, string name, int age, vector<Subjects*> subjects) 
    : AcademicPerson(string city, string name, int age, subjects) {}

Student::~Student() {
    cout << "The student: " << this->BI << " was deleted!\n";
}

virtual void Student::introduce(){
    cout << "Hi! My name is " << this->name << " and I like learning!\n";
}