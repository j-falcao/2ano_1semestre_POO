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
    Account newAccount(person);
    if(this->accounts.contains(newAccount)) return false;
    this->accounts.insert(newAccount);
    return true;
}

bool Bank::delNewestAccount(int BI_AccountOwner){
    //this will delete the newest account found under the given BI
    for (Account account : std::set<Account>(this->accounts.rbegin(), this->accounts.rend())) {
        if(account.AccountOwner->getBI() == BI_AccountOwner){
            this->accounts.erase(account);
            return true;
        }
    }
    std::cout << "There is no account under the BI: " << BI_AccountOwner << std::endl;
    return false;
}

bool Bank::delOldestAccount(int BI_AccountOwner){
    //this will delete the oldest account found under the given BI
    for (Account account: this->accounts) {
        if(account.AccountOwner->getBI() == BI_AccountOwner){
            this->accounts.erase(account);
            return true;
        }
    }
    std::cout << "There are no accounts under the BI: " << BI_AccountOwner << std::endl;
    return false;
}

bool Bank::delAccountByIdAccount(int idAccount){
    //this will account who's id is equal to isAccount
    for (Account account: this->accounts) {
        if(account.idAccount == idAccount){
            this->accounts.erase(account);
            return true;
        }
    }
    std::cout << "The account: " << idAccount << " does not exist!\n";
    return false;
}

const Account* Bank::searchAccount(int BI_AccountOwner){

}

int Bank::sumBalanceAllAccounts(){

}

string Bank::commaSeperatedClientNames(){
    
}