#include <bits/stdc++.h>

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

int main(int argc, char const *argv[])
{
    int n, x, pos = 0, neg = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    cin >> n;
    int end = (n / 2) + n % 2;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0)
            pos += 1;
        else if (x < 0)
            neg += 1;
    }
    if (pos >= end)
        cout << 1 << '\n';
    else if (neg >= end)
        cout << -1 << '\n';
    else
        cout << 0 << '\n';

    return 0;
}
