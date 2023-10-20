#ifndef CONTA_H
#define CONTA_H

#include <iostream>
using namespace std;
#include <string>
#include "Pessoa.h"

class Conta
{
    int NC;
    int SALDO;
    Pessoa *Ptr_Titular;
    public:
        Conta();
        virtual ~Conta();
        int Get_SALDO() { return SALDO; }
        int Get_NC()    { return NC;    }
};

#endif // CONTA_H
