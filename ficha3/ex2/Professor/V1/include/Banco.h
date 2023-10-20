#ifndef BANCO_H
#define BANCO_H

#include <iostream>
using namespace std;
#include <string>
#include <list>
#include "Pessoa.h"
#include "Conta.h"

class Banco
{
    string NOME;
    list<Pessoa *> LP;
    list<Conta *> LC;
    public:
        Banco(string _nome);
        virtual ~Banco();
        bool Add(Pessoa *X);
        void Show();
        // void Add(Conta *X);
        // bool Remover(int ID_P);
        Pessoa *Pesquisar_Pessoa(int bi);
        Conta *Pesquisar_Conta(int nc);
        // Conta *Conta_Mais_Saldo();
        // void Gravar_XML(string ficheiro);
        // Pessoa *PessoaMaisGuito();
        // int ContarPessoaApelido(string apelido);
        // bool Depositar(int nc, int valor);
        // list<Conta *> *ContasSaldoInferior(int valor);
        // void RemoverContasSaldoInferior(int valor);
        int TotalSaldos();
};

#endif // BANCO_H
