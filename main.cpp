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
    // getters and setters
    int getRed()                { return red;}
    int getGreen()              { return green; }
    int getBlue()               { return blue; }
    void setRed(int r)          { red = r; }
    void setGreen(int g)        { green = g; }
    void setBlue(int b)         { blue = b; }

    // other methods
    void print() {
        cout << setw(W15) << "Red: " << red << endl;
        cout << setw(W15) << "Green: " << green << endl;
        cout << setw(W15) << "Blue: " << blue << endl;
    }
};

void print(Color);

int main() {
    cout << fixed << setprecision(2);
    // Color 1
    Color c1;
    c1.setRed(255);
    c1.setGreen(0);
    c1.setBlue(0);
    c1.print();
    print(c1);

    // Color 2
    Color c2;
    c2.setRed(0);
    c2.setGreen(255);
    c2.setBlue(0);
    c2.print();
    print(c2);
    
    // Color 3
    Color c3;
    c3.setRed(0);
    c3.setGreen(0);
    c3.setBlue(255);
    c3.print();
    print(c2);

    return 0;
}

void print(Color c) {
    cout << "RGB (" << c.getRed() << ", "
         << c.getGreen() << ", " 
         << c.getBlue() << ")\n\n";
}
