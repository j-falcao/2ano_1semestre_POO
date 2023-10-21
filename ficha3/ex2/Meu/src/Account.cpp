#include "..\\include\\Account.hpp"


int Account::nextIdAccount = 0;

Account::Account(Person* AccountOwner, int inicialBalance) {
    this->AccountOwner = AccountOwner;
    this->balance = balance;
    this->idAccount = Account::nextIdAccount++;
}

Account::~Account(){
    cout << this->AccountOwner->getName() << "'s account has been removed.\n";
}

/* Account::Account(const Account& other) {
    this->balance = other.balance;
    this->idAccount = other.idAccount;
    this->AccountOwner = other.AccountOwner;
} */

/* Account& Account::operator=(const Account& other) {
    this->balance = other.balance;
    this->idAccount = other.idAccount;
    this->AccountOwner = other.AccountOwner;
    return *this;
} */

bool Account::operator==(const Account& other) const {
    return this->idAccount == other.idAccount;
}

bool Account::operator<(const Account& other) const {
    return this->idAccount < other.idAccount;
}

int Account::getBalance() const {
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
    return true;
}

const Person* Account::getAccountOwner() const {
    return AccountOwner;
}