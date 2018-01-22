#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int main( ) {
    scanf("%d %d", &n, &m);
    if (n >= 30) {
        printf("%d", m);
        return 0;
    }
    printf("%d", m % (1 << n)); // (1 << n) == 2 a la n
    return 0;
}
