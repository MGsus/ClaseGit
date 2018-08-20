#include <bits/stdc++.h>

using namespace std;

int t, n, m;
string const LETTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string s;
char c;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;

        for (int j = 0; j < n; i++)
        {
            cin >> s;
            while (s[j])
            {
                c = s[j];
                if (islower(c))
                    s[j] = toupper(c);
                else
                    s[j] = tolower(c);
                i++;
            }
            cout << s << '\n';
        }
    }
    return 0;
}
