#include "src\\Person.cpp"
#include "src\\Bank.cpp"
#include "src\\Account.cpp"


int main(){

    Person *person1 = new Person("Aveiro", "Joao", 21);
    Person *person2 = new Person("Lisboa", "Pedro", 40);
    Person *person3 = new Person("Tomar", "Luis", 30);
    Person *person4 = new Person("Setubal", "Afonso", 5);
    Person *person5 = new Person("Aveiro", "Asdrubal", 90);
    Person *person6 = new Person("Porto", "Luisa", 18);

    Bank *banco1 = new Bank("Santander");
    Bank *banco2 = new Bank("BPI");

    cout << banco1->addAccount(person1, 69000) << endl;
    cout << banco2->addAccount(person1, 6300) << endl;
    cout << banco1->commaSeperatedClientNames() << endl;
    cout << banco2->commaSeperatedClientNames() << endl;

    person1->setName("Joana");

    cout << banco1->commaSeperatedClientNames() << endl;
    cout << banco2->commaSeperatedClientNames() << endl;

    person1->showPerson();

    delete banco1;
    delete banco2;

    delete person1;
    delete person2;
    delete person3;
    delete person4;
    delete person5;
    delete person6;

    return 0;
}