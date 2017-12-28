#include <bits/stdc++.h>

using namespace std;

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
   array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right of pivot
 */
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1); //index oof smaller element

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++; //increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

/* low --> Starting index
   High --> Ending index
 */
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        /* Part is partitioning index,
           arr[p] is now at right place */
        int part = partition(arr, low, high);

        //Separately sort elements before
        //partition and after partition
        quickSort(arr, low, part - 1);
        quickSort(arr, part + 1, high);
    }
}

//To print an array
void printArray(int arr[], int len) {
    int i;
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, len - 1);
    printf("Sorted Array: \n");
    printArray(arr, len);
    return 0;
}
