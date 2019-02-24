#include <bits/stdc++.h>

using namespace std;

long int n, l, r, d;

int main(int argc, char const *argv[])
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> l >> r >> d;
        if (d < l)
        {
            for (int j = 1; j < l; j++)
            {
                if (j % d == 0)
                {
                    cout << j << endl;
                    break;
                }
            }
        }
        else
        {
            cout << (r / d + 1) * d << endl;
        }
    }
    return 0;
}
