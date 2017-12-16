#include <bits/stdc++.h>

#define  ARRAY_SIZE(array) (sizeof(array) / sizeof(array[0]))

using namespace std;

double avg(int _target[]) {
    int sum{};
    double result{};

    for (int i = 0; i < ARRAY_SIZE(_target); i++) {
        if (i == (ARRAY_SIZE(_target) - 1)) {
            result = (sum += _target[i]) / (ARRAY_SIZE(_target));
            return result;
        }
        else {
            sum += _target[i];
        }
    }
}

int main(void) {
    int _array[] = {2, 1, 1, 1, 1};
    cout << "Average: " << avg(_array) << endl;
}
