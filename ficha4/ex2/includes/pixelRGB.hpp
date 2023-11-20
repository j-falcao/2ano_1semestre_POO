#ifndef PIXELRGB_HPP
#define PIXELRGB_HPP



class PixelRGB {     
    int r,g,b;         // RED GREEN BLUE, valores de 0 a 255  
public:     
    PixelRGB(int cr = 0, int cg = 0, int cb = 0) : r(cr), g(cg), b(cb) {}     
    int getR() const { return r; }     
    int getG() const { return g; }     
    int getB() const { return b; }     
    void setR(int c) { r = c; }     
    void setG(int c) { g = c; }     
    void setB(int c) { b = c; }  
    void showColor() { std::cout << "R: " << r << " G: " << g << " B: " << b << std::endl; }
};


#endif