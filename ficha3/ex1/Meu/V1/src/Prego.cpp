#include "..\\include\\Prego.hpp"

Prego::Prego(int a, int b){
    this->x = a; this->y = b;
    std::cout << "construindo prego em " << x << ", " << y << "\n";
}

Prego::~Prego(){ 
    std::cout << "destruindo prego em " << x << "," << y << "\n"; 
}

void Prego::changeLocation(int a, int b){
    this->x = a; this->y = b;
}

void Prego::showPrego(){
    std::cout << "Prego esta em (" << this->x << ", " << this->y << ")\n"; 
}

void Prego::removePrego(){ 
    delete this; 
}
