#include <bits/stdc++.h>

#define ll long long

using namespace std;
const int MAXN = 110000;
int d[MAXN], v[MAXN], n, m;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    sort(v + 1, v + 1 + n);
    for (int i = 1; i <= n; i++) {
        int j = i;
        while (j < n && v[j + 1] == v[i])
            ++j;
        d[++m] = j - i + 1;
        i = j;
    }
    for (int i = 1; i <= m; i++) {
        if (d[i] % 2 == 1) {
            return cout << "Conan", 0;
        }
    }
    return cout << "Agasa", 0;
}
