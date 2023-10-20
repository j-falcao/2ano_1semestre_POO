#include <iostream>

using namespace std;
#include "Pessoa.h"
#include "Conta.h"
#include "Banco.h"

int main()
{
    cout << "Contas do Banco!" << endl;
    Banco CGD("O NOsso Banco!");
    CGD.Show();
    Pessoa *X = new Pessoa(123, "Ze");
    CGD.Add(X);
    X = new Pessoa(321, "Pedro");
    CGD.Add(X);

    CGD.Show();
    return 0;
}
