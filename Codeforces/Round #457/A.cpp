#include <bits/stdc++.h>

using namespace std;

int x, hh, mm, ans;

int main( ) {
    cin >> x;
    cin >> hh >> mm;
    while (true) {
        if (hh % 10 == 7 || hh / 10 == 7 || mm % 10 == 7 || mm / 10 == 7)
            break;
        ans++;
        mm -= x;
        if (mm < 0) {
            mm += 60;
            hh--;
        }
        if (hh < 0) {
            hh += 24;
        }
    }
    cout << ans;
    return 0;
}
