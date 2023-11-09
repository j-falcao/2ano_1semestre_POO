#include ".\\include\\Turma.hpp"


int main(){

    Subject subject1("Algebra", "Aqui aprenden-se matrizes.");
    Subject subject2("Analise Matematica", "Aqui aprenden-se derivadas.");
    Subject subject3("Geografia", "Aqui aprenden-se paises.");

    Professor professor1("Aveiro", "Prof. Julio", 40);
    Professor professor2("Porto", "Prof. Matilde", 33);

    Student student1("Porto", "Joao", 21);
    Student student2("Lisboa", "Ana", 17);
    Student student3("Santarem", "Rita", 20);
    Student student4("Lisboa", "Beatriz", 19);
    Student student5("Aveiro", "Rodrigo", 17);

    professor1.addSubject(&subject1);
    professor2.addSubject(&subject1);
    professor2.addSubject(&subject2);

    student1.addSubject(&subject1);
    student1.addSubject(&subject3);
    student2.addSubject(&subject2);
    student3.addSubject(&subject1);
    student3.addSubject(&subject2);

    Turma turma1(&professor1, &subject1, {&student1, &student2});
    Turma turma2(&professor1, &subject2, {&student2, &student3});
    Turma turma3(&professor2, &subject2, {&student2, &student3});


    return 0;
}