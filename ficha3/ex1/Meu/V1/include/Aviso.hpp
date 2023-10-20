#ifndef AVISO_H
#define AVISO_H

#include "Prego.hpp"
#include <string>

class Aviso{
    std::string texto;
    Prego* prego;
public:
    Aviso(std::string texto, Prego* prego);

    ~Aviso();

    void removeAviso();

    std::string getTexto();

    Prego* getPrego();
};


#endif