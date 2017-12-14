#include <bits/stdc++.h>

using namespace std;

int sum(int x, int y) {
    return x + y;
}

int sum(int x, int y, int z) {
    return x + y + z;
}

//Inline Function, use this type for small pieces of code that are used frequently
inline void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);
    cout << sum(x, y);
    return 0;
}
