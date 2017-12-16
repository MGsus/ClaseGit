#include <bits/stdc++.h>
//U can create a header and then include in you .cpp files
// #include <Rectangle.h>
using namespace std;

class Rectangle {
    public:
        int _width;
        int _height;
};

int main(void) {
    Rectangle inner; // NEVER do this
    //Less specific initialization, default values
    Rectangle outer{}; // _width = 0; _height=0. Nice practice

    // Dot initialization
    /*    outer._width = 10;
        outer._height = 10;
     */
    inner._width = 5;
    inner._height = 5;

    //Couts
    cout << inner._width << endl << inner._height << endl;
    cout << "Outer rectangle:" << endl << outer._width << endl <<
        outer._height << endl;
}
