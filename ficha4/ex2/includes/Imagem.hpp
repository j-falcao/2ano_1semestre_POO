#ifndef IMAGEM_HPP
#define IMAGEM_HPP

#include "pixelRGB.hpp"
#include <vector>

class Imagem {
private:
    std::vector<std::vector<PixelRGB>> imagem;
    int nLinhas, nColunas;
public:
    Imagem(int linhas, int colunas, char cor = 0){
        nLinhas = linhas;
        nColunas = colunas;
        PixelRGB pixel = PixelRGB(cor, cor, cor);
        std::vector<PixelRGB> row(nColunas, pixel);
        for(int i = 0; i < nLinhas; i++) imagem.push_back(row);
    }

    std::vector<PixelRGB>& operator[](int index){
        if(index < 0 || index >= imagem.size()){
            std::cout << "Out of bounds error!\n";
            exit(1);
        }

        return imagem[index];
    }

};


#endif