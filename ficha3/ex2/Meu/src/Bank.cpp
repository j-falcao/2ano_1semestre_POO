#include "..\\include\\Bank.hpp"


Bank::Bank(string name){
    this->name = name;
}

Bank::~Bank(){
    this->delAllAccounts();
    cout << "Bank: " << this->name << " has been removed!\n";
}

string Bank::getBankName(){
    return this->name;
}

bool Bank::addAccount(Person* person){
    Account newAccount(person);

    for(auto it = this->accounts.begin(); it != this->accounts.end(); it++)
        if(*it == newAccount) return false;
    this->accounts.push_back(newAccount);
    return true;
}

bool Bank::addAccount(Person* person, int inicialBalance){
    if(inicialBalance < 0) inicialBalance = 0;
    Account newAccount(person, inicialBalance);

    for(auto it = this->accounts.begin(); it != this->accounts.end(); it++)
        if(*it == newAccount) return false;
    this->accounts.push_back(newAccount);
    return true;
}

/* bool Bank::delNewestAccount(int BI_AccountOwner){
    //this will delete the newest account found under the given BI
    for (auto rit = this->accounts.rbegin(); rit != this->accounts.rend(); rit++) {
        if(rit->AccountOwner->getBI() == BI_AccountOwner){
            this->accounts.erase(rit);
            return true;
        }
    }
    cout << "There is no account under the BI: " << BI_AccountOwner << endl;
    return false;
}
 */

bool Bank::delAccount(int BI_AccountOwner){
    //this will delete the oldest account found under the given BI
    for (auto it = this->accounts.begin(); it != this->accounts.end(); it++) {
        if(it->AccountOwner->getBI() == BI_AccountOwner){
            this->accounts.erase(it);
            return true;
        }
    }
    cout << "There are no accounts under the BI: " << BI_AccountOwner << endl;
    return false;
}

void Bank::delAllAccounts(){
    //this will delete the oldest account found under the given BI
    this->accounts.clear();
}

/* bool Bank::delAccountByIdAccount(int idAccount){
    //this will account who's id is equal to isAccount
    for (auto it = this->accounts.begin(); it != this->accounts.end(); it++) {
        if(it->idAccount == idAccount){
            this->accounts.erase(it);
            return true;
        }
    }
    cout << "The account: " << idAccount << " does not exist in this bank!\n";
    return false;
}
 */

Account* Bank::findAccount(int BI_AccountOwner){
    for (Account& account: this->accounts)
        if(account.AccountOwner->getBI() == BI_AccountOwner) return &account;
    return nullptr;
}

int Bank::sumBalanceAllAccounts() const {
    int answer = 0;
    for(const Account& account: this->accounts) answer += account.balance;
    return answer;
}

string Bank::commaSeperatedClientNames() const {
    string answer;
    for(const Account& account: this->accounts) answer += account.AccountOwner->getName() + ',';
    answer.erase(answer.length()-1);
    return answer;
}