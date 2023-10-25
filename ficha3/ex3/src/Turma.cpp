#include "..\\include\\Turma.hpp"

Turma::Turma(Professor* professor, Subject* subject) : professor(professor), subject(subject) {}

Turma::Turma(Professor* professor,  Subject* subject, vector<Student*> students) : professor(professor), subject(subject){
    this->students = students;
}

bool Turma::addStudent(Student* newStudent){
    return false;
}

bool Turma::delStudent(Student* student){
    return false;
}

void Turma::setProfessor(Professor* newProfessor){

}

const Professor* Turma::getProfessor(){
    return nullptr;
}

const Subject* Turma::getSubject(){
    return nullptr;
}