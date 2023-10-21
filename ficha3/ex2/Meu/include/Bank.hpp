#ifndef BANCO_H
#define BANCO_H

#include "Account.hpp"
#include <set>

class Bank{    
    string nome;
    set<Account*> accounts;
public:
    Bank(string name);
    ~Bank();

    string getBankName();

    bool addAccount(Person* person);
    bool delAccount(int BI_AccountOwner);
    const Account* searchAccount(int BI_AccountOwner);

    int sumBalanceAllAccounts();
    string commaSeperatedAllClientsName();
};


#endif