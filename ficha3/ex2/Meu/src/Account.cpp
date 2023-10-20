#include "..\\include\\Conta.hpp"


Account::Account(Person* AccountOwner, int balance = 0){
    if(balance < 0) balance = 0;
    this->AccountOwner = AccountOwner;
    this->balance = balance;
}

Account::~Account(){
    std::cout << this->AccountOwner << "'s account has been removed.\n";
}

int Account::getBalance(){
    return this->balance;
}

bool Account::increaseBalance(int deposit){
    if(deposit <= 0) return false;
    this->balance += deposit;
    return true;
}

bool Account::decreaseBalance(int withdraw){
    if(withdraw <= 0 || this->balance - withdraw < 0) return false;
    this->balance -= withdraw;
}

const Person* Account::getAccountOwner(){
    return AccountOwner;
}

