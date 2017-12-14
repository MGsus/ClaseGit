#include <bits/stdc++.h>

using namespace std;

int sum(int x, int y) {
    return x + y;
}

int sum(int x, int y, int z) {
    return x + y + z;
}

int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);
    cout << sum(x, y);
    return 0;
}
