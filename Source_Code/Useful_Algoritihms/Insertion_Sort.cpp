#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int entrada[], int len) {
    int j, key;
    for (int i = 1; i < len; i++) {
        key = entrada[i];
        j = i - 1;
        while (key < entrada[j] && j >= 0) {
            entrada[j + 1] = entrada[j];
            j -= 1;
        }
        entrada[j + 1] = key;
    }
}

void result(int entrada[], int len) {

    for (int i = 0; i < len; i++) {
        cout << entrada[i] << ' ';
    }
}

int main(void) {
    int entrada[] = {12, 11, 13, 5, 6};
    int len = sizeof(entrada) / sizeof(entrada[0]);
    insertion_sort(entrada, len);
    result(entrada, len);
}
