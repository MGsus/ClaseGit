#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    if (k == 1) {
        cout << n;
        return 0;
    }
    long long int f = 1;
    while (f < n) {
        f = 2 * f + 1;
    }
    cout << f;
    return 0;
}
