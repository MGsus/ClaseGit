#include <bits/stdc++.h>

#define mp make_pair
#define put insert
#define fi first
#define se second
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define eb emplace_back
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define fore(i, n) for (auto &i : n)

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

typedef long long i64;

int main()
{
    bool flag = true;
    while (flag)
    {
        vector<i64> v;
        string tmp;
        forn(i, 25)
        {
            int ascii = getchar();

            string s;
            s = (char)ascii;

            if (s != " ")
                tmp += s;
            if (s == " " || ascii == -1)
            {
                v.pb(stoll(tmp));
                tmp = "";
            }
            if (s == "\n")
            {
                v.pb(stoll(tmp));
                tmp = "";
                break;
            }
            if (ascii == -1)
            {
                flag = false;
                break;
            }
        }
        debug(v);
        int cont = 0;
        fore(i, v)
        {
            if (i % 6 == 0)
                cont++;
        }
        printf("%d\n", ((100 * cont) / v.size()));
    }

    return 0;
}