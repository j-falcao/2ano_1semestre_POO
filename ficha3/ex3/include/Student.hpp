#ifndef STUDENT_H
#define STUDENT_H

#include "Person.hpp"
#include "Subject.hpp"

class Student : public AcademicPerson {
public:
    Student(string city, string name, int age);
    Student(string city, string name, int age, vector<Subjects*> subjects);
    ~Student();

    virtual void introduce();
};



#endif