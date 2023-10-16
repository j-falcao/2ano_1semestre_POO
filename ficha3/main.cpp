#include <iostream>

class Prego{
    int x,y;
public:
    Prego(int a, int b)
    {
        x = a; y = b;
        cout << "construindo prego em " << x << "," << y << "\n";
    }

    ~Prego() { cout << "destruindo prego em " << x << "," << y << "\n"; }

    void mudaDeSitio(int a, int b) { x = a; y = b; }
} 

class Aviso{
    std::string texto;
    Prego* prego;

    Aviso(std::string texto, Prego* prego){
        
    }
}



int main() {


    return 0;
}