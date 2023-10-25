#ifndef STUDENT_H
#define STUDENT_H

#include "AcademicPerson.hpp"

class Student : public AcademicPerson {
public:
    Student(string city, string name, int age);
    Student(string city, string name, int age, vector<Subject*> subjects);
    ~Student();

    virtual void introduce();
};



#endif