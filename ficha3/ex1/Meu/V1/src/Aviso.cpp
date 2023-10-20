#include "..\\include\\Aviso.hpp"

Aviso::Aviso(std::string texto, Prego* prego) {
    std::cout << "construindo aviso: " << texto << "\n";
    this->prego = prego;
    this->texto = texto;
}

Aviso::~Aviso(){
    std::cout << "destruindo aviso: '" << texto << "'\n";
}

void Aviso::removeAviso(){ 
    delete this; 
}

std::string Aviso::getTexto(){ 
    return texto; 
}

Prego* Aviso::getPrego(){ 
    return prego; 
}