#include <bits/stdc++.h>
#define MOD 33554431
using namespace std;

int t, n;

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;
    for (int i = 0; i < t; i++) {
        int s = 0;
        cin >> n;
        for (int j = 0; j <= n; j++) {
            s += (1 << j);
        }
        if (s > MOD)
            cout << s % MOD << '\n';
        else
            cout << s << '\n';
    }
    return 0;
}
