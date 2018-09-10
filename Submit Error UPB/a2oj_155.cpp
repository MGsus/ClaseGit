#include <bits/stdc++.h>

using namespace std;

int t, n, res;
const int MOD = 33554431;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false); // Optimize Code
    cin.tie(0);
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        res = ((1 << (n + 1)) - 1) / (2 - 1);
	cout << res % MOD << '\n';
    }
    return 0;
}
