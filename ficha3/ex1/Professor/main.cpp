#include <iostream>

using namespace std;

#include "Prego.h"
#include "Aviso.h"
int main()
{
    cout << "Pregos e avisos!" << endl;
    Prego *Piones = new Prego(2,3);
    Aviso *A1 = new Aviso("Aviso 1", Piones);
    Aviso *A2 = new Aviso("Aviso 2", Piones);
    Aviso *A3 = new Aviso("Aviso 3", Piones);

    A1->Show();
    Piones->mudaDeSitio(5, 7);
    A1->Show();

    delete A1;
    delete A2;
    delete A3;

    delete Piones;
    return 0;
}
