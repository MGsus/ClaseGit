#include <bits/stdc++.h>

using namespace std;

int main( ) {
    int n, pos, l, r;
    int count = 0;
    scanf("%d %d %d %d", &n, &pos, &l, &r);
    if (l == 1 && r == n) {
        cout << 0;
        return 0;
    }
    else{
        if (pos > l && l != 1) {
            count += pos - l + 1;
        }
        if (pos < r && r != n) {
            count += r - pos + 1;
        }
        if (pos == r && l == 1 || pos == l && r == n) {
            count++;
        }
        if (pos > l && pos < r) {
            count += r - pos;
        }
    }
    cout << count;
    return 0;
}
