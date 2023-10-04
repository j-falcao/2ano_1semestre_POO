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

    cout << "Most populated city: " << m.GetMostPopulatedCity() << endl;

    m.deletePeople();

    return 0;
}