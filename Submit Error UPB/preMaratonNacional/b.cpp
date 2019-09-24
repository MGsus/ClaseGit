#include <bits/stdc++.h>

#define endl '\n'
#define bitCount(x) __builtin_popcount(x)
#define rn return

using namespace std;

typedef vector<int> vi;

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
    // #ifndef ONLINE_JUDGE
    //     freopen("in", "r", stdin);
    //     freopen("out", "w", stdout);
    // #endif
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int m, countBitsBin, countBitsHex;
        cin >> m;
        countBitsBin = bitCount(m);
        char buff[100];
        sprintf(buff, "%d", m);
        sscanf(buff, "%x", &m);
        countBitsHex = bitCount(m);
        printf("%d %d\n", countBitsBin, countBitsHex);
    }

    rn 0;
}