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
    cout << fixed;
    cout.precision(5);
#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
#endif

    int n;
    string s;
    cin >> n >> s;
    if (n == 6)
        cout << "espeon" << endl, 0;
    else if (n == 8)
        cout << "vaporeon" << endl, 0;
    else
    {
        switch (s[0])
        {
        case 'j':
            cout << "jolteon" << endl;
            return 0;
        case 'f':
            cout << "flareon" << endl;
            return 0;
        case 'u':
            cout << "umbreon" << endl;
            return 0;
        case 'l':
            cout << "leafeon" << endl;
            return 0;
        case 'g':
            cout << "glaceon" << endl;
            return 0;
        case 's':
            cout << "sylveon" << endl;
            return 0;
        }
        if (s[3] == 'r')
            cout << "flareon" << endl, 0;
        if (s[3] == 'c')
            cout << "glaceon" << endl, 0;
        if (s[3] == 't' || s[1] == 'o')
            cout << "jolteon" << endl, 0;
        if (s[3] == 'v' || s[1] == 'y')
            cout << "sylveon" << endl, 0;
        if (s[1] == 'm' || s[2] == 'b')
            cout << "umbreon" << endl, 0;
        if (s[1] == 'e' || s[3] == 'f')
            cout << "leafeon" << endl, 0;
    }
    return 0;
}