#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int main( ) {
    scanf("%d %d", &n, &m);
    if (n >= 30)
        return printf("%d\n", m);
    return printf("%d\n", m % (1 << n));
}
