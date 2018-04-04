#include <bits/stdc++.h>

using namespace std;

int r, g, b, res = 0;

int main(int argc, char const *argv[]) {
    cin >> r >> g >> b;
    for (int i = 0; i < 3; i++) {
        if (i > r || i > g || i > b)
            continue;
        int mix = i + (r - i) / 3 + (g - i) / 3 + (b - i) / 3;
        res = max(res, mix);
    }
    cout << res;
    return 0;
}
