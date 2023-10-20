#ifndef BANCO_H
#define BANCO_H

#include "Account.hpp"
#include <unordered_set>

class Banco{    
    string nome;
    unordered_set<Account*> accounts;
public:
    Banco(string nome);
    ~Banco();

    string getBankName();

    bool addAccount(Person* person);
    bool delAccount(int BI_AccountOwner);
    const Account* searchAccount(int BI_AccountOwner);

    int sumBalanceAllAccounts();
    string commaSeperatedAllClientsName();
};


#endif