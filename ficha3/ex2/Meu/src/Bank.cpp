#include "..\\include\\Bank.hpp"

Banco(string nome){
    
}
~Banco();

string getBankName();

bool addAccount(int BI_AccountOwner);
bool delAccount(int BI_AccountOwner);
const Account* searchAccount(int BI_AccountOwner);

int sumBalanceAllAccounts();
string commaSeperatedClientNames();