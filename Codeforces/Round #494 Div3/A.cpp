#include <bits/stdc++.h>

using namespace std;

int n, c;
int res = 1;
map<int, int> mp;

int main(int argc, char const *argv[]) {
    cin >> n;
    if (n == 1) {
        cout << n;
        return 0;
    }
    else{
        for (int i = 0; i < n; i++) {
            cin >> c;
            res = max(res, ++mp[c]);
        }
        cout << res;
    }
    return 0;
}
