#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll int n;
int cash = 1;
int res = 1;

int main() {

    cin >> n;
    int h[n];
    int m[n];
    for (int i = 0; i < n; i++) {
        cin >> h[i] >> m[i];
    }
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            if (h[i] == h[i - 1] && m[i] == m[i - 1])
                cash++;
            else
                cash = 1;
            res = max(res, cash);
        }
    }
    cout << res, 0;
}
