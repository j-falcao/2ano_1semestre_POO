#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>
using namespace std;

class Subject{
    static int nextId;
    const int id;
    string name, description;
public:
    Subject(string name, string description = "Description unavailable");
    ~Subject();

    const int getId();

    string getName();
    void setName(string newName);

    string getDescription();
    void setDescription(string newDescription);

    void showSubject();

    bool operator==(const Subject& other) const;
};



#endif