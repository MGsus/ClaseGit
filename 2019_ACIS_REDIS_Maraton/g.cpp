#include <bits/stdc++.h>

#define mp make_pair
#define put insert
#define endl '\n'
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)

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
    int n = 0, sz = 0, a = 0, c = 0;
    string s;
    cin >> n;
    forn(i, n)
    {
        cin >> sz >> a >> c >> s;
        if (a > c)
            cout << "ALICE" << endl;
        else if (a == c)
        {
            if (s == "Alice")
                cout << "CARL" << endl;
            else
                cout << "ALICE" << endl;
        }
        else
            cout << "CARL" << endl;
    }

    return 0;
}