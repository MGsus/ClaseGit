#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int res = 0;
    scanf("%d", &n);
    while (n != 1) {
        res += n;
        int N = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                N = n / i;
                break;
            }
        }
        n = N;
    }
    res++;
    cout << res;
    return 0;
}
