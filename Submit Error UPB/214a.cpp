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
#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
#endif

    int n, m;
    int b1 = -1, a = 0;
    cin >> n >> m;
    int cont = 0;

    int r1 = sqrt(n) + 1;
    int r2 = sqrt(m) + 1;
    int sz = (r1 > r2) ? r1 : r2;
    debug(sz, r1, r2);
    for (int b0 = 0; b0 < sz; b0++)
    {
        b1 = -1;

        double act = sqrt(n - b0);
        debug(b0);
        debug(act, (int)act);
        if ((act - (int)act) == 0)
        {
            a = act;
            act = sqrt(m - a);
        }

        debug(act, (act - (int)act));

        if ((act - (int)act) == 0)
            b1 = act;
        if (b1 == b0)
            cont++;
        debug(b1, b0, cont);
    }
    cout << cont;
    return 0;
}
