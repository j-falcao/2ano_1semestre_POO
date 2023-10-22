#ifndef TURMA_H
#define TURMA_H

/* 
Exercício 3: 
 
Construa em C++ o conceito de Turma de Alunos.  
 
Uma  turma  é  um  conjunto  de  pessoas  que  se  encontram  a  estudar  a  mesma  disciplina  com  o 
mesmo  professor.  Usando  a  classe  Pessoa  que  aparece  nos  dois  últimos  exercícios,  Escreva  a 
classe Turma, a qual deve cumprir os seguintes requisitos:  
-  A  turma  tem  um  objecto  Pessoa  que  é  o  professor  dessa  turma  e  um  conjunto  de  objectos 
Pessoa que são os alunos. Tanto o professor como os alunos têm vida própria para além da turma 
e a suas existências não podem ser controladas pelo objecto Turma.  
-  A  criação  da  turma  obriga  a  indicação  do  seu  professor.  Os  alunos  são  acrescentados  mais 
tarde.  
- Deve ser possível acrescentar alunos até ao máximo de 20.  
- Deve ser possível remover um aluno dado o seu BI.  
- Deve ser possível listar os nomes dos alunos na turma. 
 
 
 
Acrescente uma função main e teste a funcionalidade da classe.  
 
Declare várias pessoas e pelo menos duas turmas. Inscreva um aluno nas duas turmas e depois 
experimente mudar o seu nome para confirmar que essa alteração é automaticamente visível na 
listagem  de  alunos  das  duas  turmas,  provando  assim  que  essas  turmas  não  “têm”  cópias  das 
pessoas mas sim os originais. 
*/

#include "Professor.hpp"
#include "Student.hpp"
#include "Subject.hpp"


class Turma{
    Subject* subject;
    Person* professor;
    vector<Person*> students;
public:
    Turma(Person* professor, Subject* subject);
    Turma(Person* professor,  Subject* subject, vector<Person*> alunos);

    bool addStudent(Person* newStudent);
    bool delStudent(Person* student);

    void setProfessor(Person* newProfessor);
    const Person* getProfessor();

    const Subject* getSubject();
};




#endif