#include "Pessoa.h"

Pessoa::Pessoa(int _bi, string _nome)
{
    BI = _bi;
    NOME = _nome;
}

Pessoa::~Pessoa()
{
    cout << __FUNCTION__ << endl;
}

void Pessoa::Show()
{
    cout << "Pessoa: ID: " << BI << " NOME: " << NOME << endl;
}
