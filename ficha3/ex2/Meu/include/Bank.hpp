#ifndef BANCO_H
#define BANCO_H

#include "Account.hpp"
#include <set>

class Bank{    
    string nome;
    set<Account> accounts;
public:
    Bank(string name);
    ~Bank();

    string getBankName();

    void Bank::addAccount(Person* person);
    void Bank::addAccount(Person* person, int inicialBalance);
    bool delAccount(int BI_AccountOwner);
    Account* searchAccount(int BI_AccountOwner);

    int sumBalanceAllAccounts();
    string commaSeperatedClientNames();
};


#endif