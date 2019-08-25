#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define pb push_back
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

// Metodo optimo hasta cierto 1e9 para calcular primos
inline bool isPrime(unsigned ll num)
{
    if (num < 2)
        return false;

    if (num == 2)
        return true;

    if (num % 2 == 0)
        return false;

    for (unsigned ll j = 3; (j * j) <= num; j += 2)
    {
        if (num % j == 0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout << fixed;
    cout.precision(5);

#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
#endif

    int n;
    unsigned ll a, b;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        unsigned ll ans = ((a - b) * (a + b));

        cout << ((isPrime(a + b) && (a - b) == 1) ? "YES" : "NO") << endl;
    }

    return 0;
}