#ifndef PREGO_H
#define PREGO_H

#include <iostream>

class Prego{
    int x, y;
public:
    Prego(int a, int b);

    ~Prego();

    void changeLocation(int a, int b);

    void showPrego();

    void removePrego();
};


#endif