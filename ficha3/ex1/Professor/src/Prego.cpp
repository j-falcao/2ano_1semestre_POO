#include "Prego.h"

Prego::Prego(int a, int b)
{
    x = a;
    y = b;
    cout << "construindo prego em " << x << "," << y << "\n";
}
Prego::~Prego()
{
    cout << "destruindo prego em " << x << "," << y << "\n";
}
void Prego::mudaDeSitio(int a, int b)
{
    x = a; y = b;
}

void Prego::Show()
{
    cout << "Prego: (" << x << "," << y << ")" << endl;
}
