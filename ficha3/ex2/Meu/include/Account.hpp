#ifndef CONTA_H
#define CONTA_H

#include "Person.hpp"
#include "Bank.hpp"


class Account{
    friend class Bank;

    static int nextIdAccount = 0;
    int balance, idAccount;
    Person* AccountOwner;

    Account(Person* AccountOwner, int balance = 0);
    ~Account();

    const Person* getAccountOwner() const;

    // copy constructor
    Account::Account(const Account& other);

    // assignment operator overloading
    Account& Account::operator=(const Account& other);

    // comparison operator overloading
    bool operator==(const Account& other) const;

    // less then operator overloading
    bool operator<(const Account& other) const;

public:
    int getBalance() const;
    bool increaseBalance(int deposit);
    bool decreaseBalance(int withdraw);
};


#endif