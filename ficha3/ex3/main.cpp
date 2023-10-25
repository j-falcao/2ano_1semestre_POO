#include "src\\Professor.cpp"
#include "src\\Student.cpp"
#include "src\\Subject.cpp"
#include "src\\Turma.cpp"


int main(){

    Professor professor1("Aveiro", "Prof. Julio", 40);
    Professor professor2("Porto", "Prof. Matilde", 33);

    Subject subject1("Algebra", "Aqui aprenden-se matrizes.");
    Subject subject2("Analise Matematica", "Aqui aprenden-se derivadas.");
    Subject subject3("Geografia", "Aqui aprenden-se paises.");

    Student student1("Porto", "Joao", 21);
    Student student2("Lisboa", "Ana", 17);
    Student student3("Santarem", "Rita", 20);
    Student student4("Lisboa", "Beatriz", 19);
    Student student5("Aveiro", "Rodrigo", 17);


    return 0;
}