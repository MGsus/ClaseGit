#include <bits/stdc++.h>

using namespace std;

int main( ) {
    int n, pos, l, r, ans;
    int count = 0;
    scanf("%d %d %d %d", &n, &pos, &l, &r);
    if (l == 1 && r == n) {
        cout << 0;
        return 0;
    }
    if (l == 1 && r != n) {
        cout << abs(pos - r) + 1;
        return 0;
    }
    if (l != 1 && r == n) {
        cout << abs(pos - l) + 1;
        return 0;
    }
    ans = min(abs(pos - l) + 1 + abs(l - r) + 1, abs(pos - r) + 1 + abs(l - r) + 1);
    cout << ans << '\n';
    return 0;
}
