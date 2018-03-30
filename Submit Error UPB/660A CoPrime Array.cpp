#include <bits/stdc++.h>

using namespace std;

int n, res = 0;

int main(int argc, char const *argv[]) {
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        if (__gcd(a[i], a[i + 1]) != 1)
            res++;
    }
    cout << res << '\n';
    for (int i = 0; i < n; i++) {
        if (i == n - 1)
            cout << a[i];
        else
            cout << a[i] << ' ';
        if (i + 1 < n && __gcd(a[i], a[i + 1]) != 1) {
            cout << 1 << ' ';
        }
    }
    return 0;
}
