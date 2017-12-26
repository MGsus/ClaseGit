#include <bits/stdc++.h>

using namespace std;

int binarySearch(int entrada[], int izq, int der, int target) {
    while (l <= r) {
        int mitad = l + (r - 1) / 2;

        if (entrada[mitad] == objetivo) {
            return mitad;
        }
        if (entrada[mitad] < x) { // si el objetivo es más grande, se ignora la parte izquierda
            izq = mitad + 1;
        }
        else //Si el objetivo es más pequeño, se ignora la parte derecha
            der = mitad - 1;
    }
    return -1;
}

int main() {
    int entrada[] = {2, 3, 4, 10, 40};
    int len = sizeof(entrada) / sizeof(entrada[0]);
    int target = 10;
    int result = binarySearch(entrada, 0, len - 1, target);
    (result == -1)? printf("El elemento buscado no esta presente en el arreglo")
                  : printf("Elemento presente en el index %d", result);
    return 0;
}
