#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
using namespace std;
#include <string>

class Pessoa
{
    int BI;
    string NOME;
    public:
        Pessoa(int _bi, string _nome);
        virtual ~Pessoa();
        void Show();
        int Get_BI() { return BI; }
};

#endif // PESSOA_H
