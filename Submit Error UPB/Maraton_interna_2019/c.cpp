#include <bits/stdc++.h>

#define endl '\n'
// #define LOCAL
#define pb push_back
#define all(x) (x).begin(), (x).end()

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

    string s, num, res, sig;

    cin >> s;
    debug(s);
    if (s.size() == 1)
        cout << s << endl;
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0) // numeros
                num.pb(s[i]);
            else // signos +
                sig.pb(s[i]);
        }
        sort(all(num));
        debug(num);
        debug(sig);
        for (int i = 0; i < num.size(); i++)
        {
            if (i != sig.size())
            {
                res.pb(num[i]);
                res.pb(sig[i]);
            }
            else
                res.pb(num[i]);
        }
        for (int i = 0; i < res.size(); i++)
        {
            if (i == (res.size() - 1))
                cout << res[i] << endl;
            else
                cout << res[i];
        }
    }

    return 0;
}