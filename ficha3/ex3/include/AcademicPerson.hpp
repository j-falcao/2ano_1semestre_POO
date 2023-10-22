#ifndef ACADEMICPERSON_H
#define ACADEMICPERSON_H

#include "Person.hpp"
#include "Subject.hpp"
#include <vector>

class AcademicPerson : public Person {
protected:
    vector<Subject*> subjects;
public:
    AcademicPerson(string city, string name, int age);
    AcademicPerson(string city, string name, int age, vector<Subject*> subjects);
    ~AcademicPerson();

    bool addSubject(Subject* newSubject);
    bool delSubject(Subject* subject);

    void showSubjects();
    virtual void introduce();
};

#endif
