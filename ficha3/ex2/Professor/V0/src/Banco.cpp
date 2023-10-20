#include "Banco.h"

Banco::Banco(string _nome)
{
    NOME = _nome;
}

Banco::~Banco()
{
    for(list<Pessoa *>::iterator it = LP.begin(); it != LP.end(); ++it)
        delete (*it);
}

bool Banco::Add(Pessoa *P)
{
    LP.push_back(P);
    return true;
}

void Banco::Show()
{
    cout << "NOME: " << NOME << endl;
    for(list<Pessoa *>::iterator it = LP.begin(); it != LP.end(); ++it)
        (*it)->Show();
}
Pessoa *Banco::Pesquisar_Pessoa(int bi)
{
    for(list<Pessoa *>::iterator it = LP.begin(); it != LP.end(); ++it)
        if ((*it)->Get_BI() == bi)
            return *it;

    return NULL;
}
