// Lab 14 
#include <iostream>
using namespace std;
class Color {
private:
int r;
int g;
int b;
public:
int getRed() { return r; };
int getGreen() { return g; };
int getBlue() { return b; };
void setRed(int rd) { r = rd; };
void setGreen(int gr) { g = gr; };
void setBlue(int bl) { b = bl; };
void print() { cout << r << " " << g << " " << b << endl; };
};
int main() {
Color beige;
beige.setRed(245);
beige.setGreen(245);
beige.setBlue(220);
beige.print();
Color mauve;
mauve.setRed(224);
mauve.setGreen(174);
mauve.setBlue(255);
mauve.print();
return 0;
}
