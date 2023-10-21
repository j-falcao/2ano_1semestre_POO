#ifndef BANK_H
#define BANK_H

#include "Account.hpp"
#include <vector>
using namespace std;

class Bank{    
    string name;
    vector<Account> accounts;
public:
    Bank(string name);
    ~Bank();

    string getBankName();

    bool addAccount(Person* person);
    bool addAccount(Person* person, int inicialBalance);
    // bool delNewestAccount(int BI_AccountOwner);
    bool delAccount(int BI_AccountOwner);
    void delAllAccounts();
    // bool delAccountByIdAccount(int idAccount);
    Account* findAccount(int BI_AccountOwner);

    int sumBalanceAllAccounts() const;
    string commaSeperatedClientNames() const;
};


#endif