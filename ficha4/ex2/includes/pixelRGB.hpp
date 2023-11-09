#ifndef PIXELRGB_HPP
#define PIXELRGB_HPP

class PixelRGB {     
    char r,g,b;         // RED GREEN BLUE, valores de 0 a 255  
public:     
    PixelRGB(char cr = 0, int cg = 0, int cb = 0) : r(cr), g(cg), b(cb) {}     
    int getR() const { return r; }     
    int getG() const { return g; }     
    int getB() const { return b; }     
    void setR(int c) { r = c; }     
    void setG(int c) { g = c; }     
    void setB(int c) { b = c; }  
};


#endif