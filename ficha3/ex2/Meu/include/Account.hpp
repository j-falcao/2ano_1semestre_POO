#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Person.hpp"
#include "Bank.hpp"
using namespace std;

class Account{
    friend class Bank;

    static int nextIdAccount;
    int balance, idAccount;
    Person* AccountOwner;

    Account(Person* AccountOwner, int inicialBalance = 0);
    
public:

    ~Account();

    // copy constructor
    /* Account(const Account& other); */ // not nedded because is making a shallow copy which is the job of the compiler would do anyway.

    // assignment operator overloading
    /* Account& Account::operator=(const Account& other); */ // not nedded because is making a shallow copy which is the job of the compiler would do anyway.

    // comparison operator overloading
    bool operator==(const Account& other) const;

    // less then operator overloading
    bool operator<(const Account& other) const;

    int getBalance() const;
    bool increaseBalance(int deposit);
    bool decreaseBalance(int withdraw);
    const Person* getAccountOwner() const;
};


#endif