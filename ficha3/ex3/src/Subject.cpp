#include "..\\include\\Subject.hpp"


int Subject::nextId = 0;

Subject(string name, string description);
~Subject();
const int getId();
string getName();
void setName();
string getDescription();
void setDescription();

void Subject::showSubject(){
    cout << "\t\x1B[34mSubject id: \033[0m" << this->id << ' ';
    cout << "\x1B[34mSubject name: \033[0m" << this->name << '\n';
}

bool operator==(const Subject& other) const{
    return this->id == other.id;
}