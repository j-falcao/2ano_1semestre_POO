#ifndef CONTA_H
#define CONTA_H

#include "Person.hpp"
#include "Bank.hpp"

class Account{
    friend class Bank;

    int balance;
    Person* AccountOwner;

    Account(Person* AccountOwner, int balance = 0);
    ~Account();

    int getBalance();
    bool increaseBalance(int deposit);
    bool decreaseBalance(int withdraw);

    const Person* getAccountOwner();
};


#endif