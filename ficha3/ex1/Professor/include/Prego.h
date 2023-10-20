#ifndef PREGO_H
#define PREGO_H

#include <iostream>

using namespace std;

class Prego
{
    int x,y;
public:
    Prego(int a, int b);
    ~Prego();
    void mudaDeSitio(int a, int b);
    void Show();

};


#endif // PREGO_H
