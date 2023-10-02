#include "Manager.cpp"

int main(){
    Manager m;
    if(!m.readFile(".\\pessoas.txt")) cout << "Something went wrong reading the file. Try checking the data order inside the file\n";
    m.showPeople();

    return 0;
}