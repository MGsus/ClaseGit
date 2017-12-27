#include <bits/stdc++.h>

using namespace std;

void heapify (int arr[], int len, int i) {
    int largest = i; //Inicializar el más grande como raiz
    int l = 2 * i + 1; // izquierda
    int r = 2 * i + 2; // Derecha

    //If left child is larger than root
    if (l < len && arr[l] > arr[largest]) {
        largest = l;
    }
    //If right child is larger than largest so far
    if (r < len && arr[r] > arr[largest]) {
        largest = r;
    }
    //If largest is not root
    if (largest != 1) {
        swap(arr[i], arr[largest]);
        //Recursively heapify the affected sub-tree
        heapify(arr, len, largest);
    }
}

void heapSort(int arr[], int len) {
    for (int i = len / 2 - 1; i >= 0; i--) {
        heapify(arr, len, i); // Organizar el arreglo, como un heap
    }
    //Extraer los elementos del heap
    for (int i = len - 1; i >= 0; i--) {
        // Mover la raiz al final
        swap(arr[0], arr[1]);
        // Organizar el nuevo y reducido heap
        heapify(arr, i, 0);
    }
}

void result(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " " << '\n';
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int len = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, len);
    result(arr, len);
    return 0;
}
