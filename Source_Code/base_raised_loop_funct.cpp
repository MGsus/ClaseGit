#include <bits/stdc++.h>

using namespace std;

int result{1}; //Variable that contains the result of the operation

long pow(int _base, unsigned int _exponent) {
    if (_exponent == 0) {
        return 1;
    }
    else {
        for (int i = 1; i <= _exponent; i++) {
            result *= _base;
        }
    }
}

double sine(int _opposite_length, int _hypotenuse_length) {
    return _opposite_length / _hypotenuse_length;
}

int main(void) {

    int power = pow(2, 3);
    double sin = sine(18, 5);

    return 0;
}
