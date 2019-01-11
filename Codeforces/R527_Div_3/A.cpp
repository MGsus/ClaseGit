#include <bits/stdc++.h>

using namespace std;

int t, n, k;

string LETTERS = "abcdefghijklmnopqrstuvwxyz";

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string str = "";
        cin >> n >> k;
        int l = 0;
        for (int j = 0; j < n; j++)
        {
            str.push_back(LETTERS[l]);
            l++;
            if (l % k == 0)
                l = 0;
        }
        cout << str << endl;
    }
    return 0;
}