#include "..\\include\\Turma.hpp"

Turma(Person* professor, Subject* subject) : Professor(professor), Subject(subject) {}

Turma(Person* professor,  Subject* subject, vector<Person*> alunos){

}

bool addStudent(Person* newStudent);
bool delStudent(Person* student);
void setProfessor(Person* newProfessor);
const Person* getProfessor();
const Subject* getSubject();