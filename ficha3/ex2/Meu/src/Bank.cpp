#include "..\\include\\Bank.hpp"

Bank::Bank(string name){
    this->name = name;
}

Bank::~Banco(){
    std::cout << "Bank: " << this->name << " has been removed!\n";
}

string Bank::getBankName(){
    return this->name
}

bool Bank::addAccount(Person* person){
    Account* newAccount = new Account(person);
    if(this->accounts.contains(newAccount)) return false;
    this->accounts.insert(newAccount);
    return true;
}


bool Bank::delAccount(int BI_AccountOwner);
const Account* Bank::searchAccount(int BI_AccountOwner);

int Bank::sumBalanceAllAccounts();
string Bank::commaSeperatedClientNames();