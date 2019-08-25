#include <bits/stdc++.h>

#define endl '\n'
#define pb push_back
#define ll long long

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

    unsigned ll n;
    // unsigned ll mod, div, ans = 2e9;
    cin >> n;

    // numero par mayor que 2 suma de dos primos
    // numero entero mayor que 5 suma de 3 numeros primos
    if (n == 2)
    {
        cout << 1 << endl;
        return 0;
    }
    else if (n == 4)
    {
        cout << 2 << endl;
        return 0;
    }
    else if (n % 2 == 0)
    {
        cout << 2 << endl;
        return 0;
    }
    else
    {
        if (isPrime(n))
            cout << 1 << endl;
        else if (isPrime(n - 2))
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }

    // for (unsigned ll i = n; i > 2; i -= 2)
    // {
    //     mod = n % i;
    //     // div = n / i;
    //     debug(mod);
    //     // debug(div);
    //     debug(i);
    //     if (n % 2 == 0)
    //     {
    //         if (isPrime(i))
    //         {
    //             if (mod == 0)
    //                 ans = min(n / i, ans);
    //         }
    //     }
    //     // if (mod == 0 && div != n)
    //     // {
    //     //     // if (n % 2 == 0)
    //     //     // {
    //     //     //     cout << n / 2 << endl;
    //     //     //     return 0;
    //     //     // }
    //     //     // else
    //     //     // {
    //     //     cout << min(div, i) << endl;
    //     //     return 0;
    //     //     //}
    //     // }
    // }

    return 0;
}