#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define LOCAL

typedef long long ll;

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

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
#endif

    int n, m, posI = 0, posJ = 0, k = 0;
    string s1, s2;
    map<int, string> map1, map2, map3, map4;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s1;
        map1[i] = s1;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> s2;
        map2[i] = s2;
    }
    debug(map1.size(), map2.size());
    for (int i = 0; i < n; i++)
    {
        k = 0;
        for (int j = 0; j < m; j++)
        {

            if (map2[j].find(map1[i + j]) != string::npos)
                k++;
            else
                break;
        }
        debug(k, m);
        if (k == m)
        {
            posI = i;
            break;
        }
    }
    posJ = map2[0].find(map1[posI]);
    cout << posI + 1 << " " << posJ + 1 << endl;
    return 0;
}
