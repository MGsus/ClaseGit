#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout << fixed;
    cout.precision(5);
    // #ifndef ONLINE_JUDGE
    //     freopen("in", "r", stdin);
    //     freopen("out", "w", stdout);
    // #endif

    int n, res = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x')
            res++;
    }
    cout << res << endl;
    return 0;
}