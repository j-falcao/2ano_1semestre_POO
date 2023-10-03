#include "Manager.cpp"

int main(){
    Manager m;
    if(!m.readFile(".\\people.txt")){ 
        cout << "Something went wrong reading the file. Try checking the data order inside the file\n";
        return -1;
    }



    Person *p1 = new Person("Joaozinho", "Aveiro", 21);
    m.addPerson(p1);

    m.showPeople();
    m.deletePerson(p1->getName());
    m.showPeople();



    return 0;
}