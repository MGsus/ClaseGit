#include <bits/stdc++.h>

#define mp make_pair
#define put insert
#define fi first
#define se second
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)

using namespace std;

int main()
{
    int w = 0, n = 0, wi = 0, wl = 0, res = 0;
    cin >> w;
    cin >> n;
    forn(i, n)
    {
        cin >> wi >> wl;
        res += wi * wl;
    }
    cout << res / w << endl;
    return 0;
}