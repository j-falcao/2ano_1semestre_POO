#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>

class Subject{
    static int nextId;
    const int id;
    string name, description;
public:
    Subject(string name, string description = "Description unavailable");
    ~Subject();

    const int getId();

    string getName();
    void setName();

    string getDescription();
    void setDescription();
}



#endif