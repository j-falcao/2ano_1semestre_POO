#include "Manager.cpp"

int main(){
    Manager m;
    if(!m.readFile(".\\people.txt")){ 
        cout << "Something went wrong reading the file. Try checking the data order inside the file\n";
        return -1;
    }


    Person *p1 = new Person("Joao", "Aveiro", 21);
    m.addPerson(p1);
    m.showPeople();

    Person* p1Found = m.searchPerson(p1->getName());
    if(p1Found != nullptr) p1Found->showPerson();
    

    return 0;
}