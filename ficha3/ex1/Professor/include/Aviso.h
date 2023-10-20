#ifndef AVISO_H
#define AVISO_H

#include <iostream>
using namespace std;
#include <string>

#include "Prego.h"

class Aviso
{
    string TEXTO;
    Prego *Ptr_Prego;
    public:
        Aviso(string _texto, Prego *p);
        virtual ~Aviso();
        void Show();
};

#endif // AVISO_H
