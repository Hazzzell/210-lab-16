// COMSC-210 | Lab 16 | Keng C Chan
// IDE used: Visual Studio Code (VS Code)

#include <iostream>
#include <iomanip>
using namespace std;

const int W15 = 15;

class Color {
private:
    int red, green, blue;

public:
    // Constructors
    // default constructor (Color Black)
    Color(){
        red = 0;
        green = 0;
        blue = 0;
    }

    // partial constructor (Only red, other default to 0)
    Color(int r){
        red = r;
        green = 0; 
        blue = 0;
    }

    // parameter constructor
    Color(int r, int g, int b){
        red = r;
        green = g; 
        blue = b;
    }

    // getters and setters
    int getRed()                { return red;}
    int getGreen()              { return green; }
    int getBlue()               { return blue; }
    void setRed(int r)          { red = r; }
    void setGreen(int g)        { green = g; }
    void setBlue(int b)         { blue = b; }

    // print function
    void print() {
        cout << setw(W15) << "Red: " << red << endl;
        cout << setw(W15) << "Green: " << green << endl;
        cout << setw(W15) << "Blue: " << blue << endl;
        cout << endl;
    }
};


int main() {
    cout << fixed << setprecision(2);
    // Color 1 - default constructor
    Color c1;
    c1.print();

    // Color 2 - partial constructor
    Color c2(125);
    c2.print();
    
    // Color 3 - parameter constructor
    Color c3(200, 245, 210);
    c3.print();

    return 0;
}
