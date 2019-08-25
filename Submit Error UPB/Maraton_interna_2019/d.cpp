#include <bits/stdc++.h>

#define endl '\n'
// #define LOCAL

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
    cout << fixed;
    cout.precision(5);
    // #ifndef ONLINE_JUDGE
    //     freopen("in", "r", stdin);
    //     freopen("out", "w", stdout);
    // #endif

    int n, cont = 0;
    const int MAXN = 1e3;
    cin >> n;
    for (int j = 1; j < MAXN; j++)
    {
        int pr = n * j + 1;
        debug(pr);
        for (int i = 2; i < pr; i++)
        {
            if (pr % i == 0)
                cont++;
        }
        debug(cont);
        if (cont >= 1)
        {
            cout << j << endl;
            return 0;
        }
        else
            continue;
    }
    return 0;
}