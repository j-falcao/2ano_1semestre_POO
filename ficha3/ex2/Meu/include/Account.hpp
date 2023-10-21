#ifndef CONTA_H
#define CONTA_H

#include "Person.hpp"
#include "Bank.hpp"


class Account{
    friend class Bank;

    static int nextIdAccount = 0;
    int balance, idAccount;
    Person* AccountOwner;

    Account(Person* AccountOwner, int inicialBalance = 0);
    ~Account();

    // copy constructor
    /* Account::Account(const Account& other); */ // not nedded because is making a shallow copy which is the job of the compiler would do anyway.

    // assignment operator overloading
    /* Account& Account::operator=(const Account& other); */ // not nedded because is making a shallow copy which is the job of the compiler would do anyway.

    // comparison operator overloading
    bool operator==(const Account& other) const;

    // less then operator overloading
    bool operator<(const Account& other) const;

public:
    int getBalance() const;
    bool increaseBalance(int deposit);
    bool decreaseBalance(int withdraw);
    const Person* getAccountOwner() const;
};


#endif