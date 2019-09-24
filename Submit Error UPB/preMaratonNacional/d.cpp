#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define mp make_pair
#define fi first
#define se second
#define endl '\n'
#define all(x) (x).begin(), (x).end()
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

typedef vector<int> vi;

int main()
{
    string del = "AEIOUHWY";
    map<char, int> map;
    map.insert(mp('B', 1));
    map.insert(mp('F', 1));
    map.insert(mp('P', 1));
    map.insert(mp('V', 1));

    map.insert(mp('C', 2));
    map.insert(mp('G', 2));
    map.insert(mp('J', 2));
    map.insert(mp('K', 2));
    map.insert(mp('Q', 2));
    map.insert(mp('S', 2));
    map.insert(mp('X', 2));
    map.insert(mp('Z', 2));

    map.insert(mp('D', 3));
    map.insert(mp('T', 3));

    map.insert(mp('L', 4));

    map.insert(mp('M', 5));
    map.insert(mp('N', 5));

    map.insert(mp('R', 6));

    string s;
    while (cin >> s)
    {
        string cont = "";
        forn(i, s.size())
        {
            if (del.find(s[i]) == string::npos) // indexOf() de Java
            {
                debug(i, map[s[i]], map[s[i - 1]]);
                if (i > 0 && map[s[i]] != map[s[i - 1]])
                    cont += to_string(map[s[i]]);
                else if (i == 0)
                    cont += to_string(map[s[i]]);
            }
        }
        cout << cont << endl;
    }

    return 0;
}
