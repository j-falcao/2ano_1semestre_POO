#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "AcademicPerson.hpp"

class Professor : public AcademicPerson {
public:
    Professor(string city, string name, int age);
    Professor(string city, string name, int age, vector<Subjects*> subjects);
    ~Professor();

    virtual void introduce();
};


#endif