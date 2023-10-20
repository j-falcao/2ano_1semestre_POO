#ifndef CONTA_H
#define CONTA_H

#include "Person.hpp"

class Account{
    int balance;
    Person* AccountOwner;
public:

    Account(Person* AccountOwner, int balance = 0);
    ~Account();

    int getBalance();
    bool increaseBalance(int deposit);
    bool decreaseBalance(int withdraw);

    const Person* getAccountOwner();
};


#endif