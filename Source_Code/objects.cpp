#include <bits/stdc++.h>
//U can create a header and then include in you .cpp files
// #include <Rectangle.h>
using namespace std;

class Rectangle {

    private:
        int _width;
        int _height;

    public:
        int get_area() { // Class Function to get area
            return this->_width * this->_height;
        }
        int get_width() {
            return _width;
        }
        int get_height() {
            return _height;
        }
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

    //Example of encapsulation
    Rectangle a_rectangle{3, 4};
    int the_area = a_rectangle.get_area(); //int the_area{a_rectangle.get_area()};

    //Couts
    cout << inner._width << endl << inner._height << endl;
    cout << "Outer rectangle:" << endl << outer._width << endl <<
        outer._height << endl;
    cout << "Area proof: " << the_area << endl;
}
