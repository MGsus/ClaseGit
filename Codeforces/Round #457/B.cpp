#include <bits/stdc++.h>

#define ll long long
#define bit(a, b) (((a) >> (b)) & 1)
#define int ll

using namespace std;

const int MAXN = 1e6 + 20;
int t[MAXN * 2];

int32_t main( ) {

    ll n, k;
    cin >> n >> k;
    for (int i = 0; i < 64; i++) {
        if (bit(n, i))
            t[i + MAXN]++, k--;
    }
    if (k < 0)
        return cout << "No" << endl, 0;
    cout << "Yes" << endl;
    for (int i = 2 * MAXN - 1; i >= 1; i--) {
        if (k >= t[i]) {
            k -= t[i];
            t[i - 1] += 2 * t[i];
            t[i] = 0;
        }
        else
            break;
    }
    for (int i = 1; i < 2 * MAXN; i++) {
        if (k && t[i]) {
            k--;
            t[i]--;
            t[i - 1] += 2;
            i -= 2;
        }
    }
    for (int i = MAXN * 2 - 1; i >= 0; i--) {
        for (int j = 0; j < t[i]; j++) {
            cout << i - MAXN << " ";
        }
    }
}
