#include "Aviso.h"

Aviso::Aviso(string _texto, Prego *p)
{
    TEXTO = _texto;
    Ptr_Prego = p;
    cout << "<" << __FUNCTION__ << ">" << endl;
}

Aviso::~Aviso()
{
    cout << "<" << __FUNCTION__ << ">" << endl;
}

void Aviso::Show()
{
    cout << "TEXTO: " << TEXTO << endl;
    Ptr_Prego->Show();
}
