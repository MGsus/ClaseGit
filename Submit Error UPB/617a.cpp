#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
#endif

    int n, steps;
    cin >> n;
    steps = (n % 5) == 0 ? (n / 5) : (n / 5) + 1;
    cout << steps << endl;
    return 0;
}
