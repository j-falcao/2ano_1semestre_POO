#include <iostream>
#include <vector>
#include <map>


class Prego{
    int x, y;
public:
    Prego(int a, int b){
        x = a; y = b;
        std::cout << "construindo prego em " << x << ", " << y << "\n";
    }

    ~Prego() { std::cout << "destruindo prego em " << x << "," << y << "\n"; }

    void changeLocation(int a, int b) { x = a; y = b; }

    void showPrego()  { std::cout << "Prego esta em (" << x << ", " << y << ")\n"; }
};

class Aviso{
    std::string texto;
    Prego* prego;
public:
    Aviso(std::string texto, Prego* prego) {
        std::cout << "construindo aviso: " << texto << "\n";
        this->prego = prego;
        this->texto = texto;
    }

    ~Aviso(){
        std::cout << "destruindo aviso: '" << texto << "'\n";
    }

    Prego* getPrego(){
        return prego;
    }

    void removerAviso(){
        delete this;
    }

};


Prego* pregoComMaisAvisos(std::vector<Aviso*> avisos){
    std::map<Prego*, int> freqs;
    for(Aviso* a: avisos) freqs[a->getPrego()]++;
    if(freqs.empty()) return nullptr;

    Prego *res;
    int maxQtAvisos = INT_MIN;
    for(auto it: freqs) {
        if(it.second > maxQtAvisos){
            maxQtAvisos = it.second;
            res = it.first;
        }
    }
    return res;
}




int main() {
    Prego *p1 = new Prego(0, 0);
    Prego *p2 = new Prego(1, 1);
    Prego *p3 = new Prego(2, 2);
    Prego *p4 = new Prego(3, 3);
    Prego *p5 = new Prego(4, 4);

    std::vector<Prego*> pregos;
    pregos.push_back(p1);
    pregos.push_back(p2);
    pregos.push_back(p3);
    pregos.push_back(p4);
    pregos.push_back(p5);



    Aviso *a1 = new Aviso("Aviso 1", p1);
    Aviso *a2 = new Aviso("Aviso 2", p2);
    Aviso *a3 = new Aviso("Aviso 3", p3);
    Aviso *a4 = new Aviso("Aviso 1", p4);
    Aviso *a5 = new Aviso("Aviso 5", p5);
    Aviso *a6 = new Aviso("Aviso 6", p2);
    Aviso *a7 = new Aviso("Aviso 7", p2);
    Aviso *a8 = new Aviso("Aviso 1", p1);
    Aviso *a9 = new Aviso("Aviso 9", p4);

    std::vector<Aviso*> avisos;
    avisos.push_back(a1);
    avisos.push_back(a2);
    avisos.push_back(a3);
    avisos.push_back(a4);
    avisos.push_back(a5);
    avisos.push_back(a6);
    avisos.push_back(a7);
    avisos.push_back(a8);
    avisos.push_back(a9);




    for(Prego* p: pregos) p->showPrego();

    /* p1->changeLocation(69, 69);
    for(Prego* p: pregos) p->showPrego(); */

    /* std::cout << "\n\n";
    pregoComMaisAvisos(avisos)->showPrego();
    std::cout << "\n\n"; */




    for(Prego* a: avisos) delete a;
    for(Prego* p: pregos) delete p;

    return 0;
}