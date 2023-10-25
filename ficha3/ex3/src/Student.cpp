#include "..\\include\\Student.hpp"


Student::Student(string city, string name, int age) 
    : AcademicPerson(city, name, age) {}

Student::Student(string city, string name, int age, vector<Subject*> subjects) 
    : AcademicPerson(city, name, age) {
        this->subjects = subjects;
    }

Student::~Student() {
    cout << "The student: " << this->BI << " was deleted!\n";
}

void Student::introduce(){
    cout << "Hi! My name is " << this->name << " and I like learning!\n";
}