#include <bits/stdc++.h>
#define MOD 33554431
using namespace std;

int t, n, res;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        res = ((1 << (n + 1)) - 1) / (2 - 1) % MOD;
        cout << res;
    }
    return 0;
}
