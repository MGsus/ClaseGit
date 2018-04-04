#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll int k, b, n, t;
ll int x = 1;

int main(int argc, char const *argv[]) {
    cin >> k >> b >> n >> t;
    for (int i = 0; i < n; i++) {
        x = k * x + b;
        if (x > t) {
            cout << n - i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
