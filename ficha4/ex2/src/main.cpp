#include <iostream>
#include "..\\includes\\Imagem.hpp"
#include "..\\includes\\pixelRGB.hpp"

int main()  {     
    Imagem img(30,40);     
    PixelRGB aux = img[15][16];  // obtém ponto de cor em 15,16     
    aux.showColor();

    PixelRGB temp(30,40,50);     
    img[13][15] = temp;          // coloca pixel de cor diferente    

    img[13][15].showColor();


    return 0;  
}