#include <bits/stdc++.h>
#define endl '\n'
#define LOCAL

using namespace std;

string to_string(string s)
{
    return '"' + s + '"';
}

string to_string(const char *s)
{
    return to_string((string)s);
}

string to_string(bool b)
{
    return (b ? "true" : "false");
}

template <typename A, typename B>
string to_string(pair<A, B> p)
{
    return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A>
string to_string(A v)
{
    bool first = true;
    string res = "{";
    for (const auto &x : v)
    {
        if (!first)
        {
            res += ", ";
        }
        first = false;
        res += to_string(x);
    }
    res += "}";
    return res;
}

void debug_out() { cerr << endl; }

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T)
{
    cerr << " " << to_string(H);
    debug_out(T...);
}

#ifdef LOCAL
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...)
#endif

int main()
{
    ios_base::sync_with_stdio(false);
    cout.precision(5);
    cout << fixed;

#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
#endif

    int n, i, j, rnd;
    while (cin >> n >> i >> j)
    {
        for (rnd = 1; rnd < n; rnd++)
        {
            if (i > j)
                swap(i, j);
            if ((i % 2) == 1 && (j % 2) == 0 and (j - i) == 1)
                break;
            if ((i % 2) == 0)
                i /= 2;
            else
            {
                // i = (i+1) >> 1;
                i += 1;
                i /= 2;
            }
            if ((j % 2) == 0)
                j /= 2;
            else
            {
                // j = (j+1) >> 1;
                j += 1;
                j /= 2;
            }
        }
        cout << rnd << endl;
    }
    return 0;
}
