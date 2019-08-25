#include <bits/stdc++.h>

#define endl '\n'
#define pb push_back
#define ll long long
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

vector<int> flip(vector<int> v)
{
    vector<int> aux;
    for (int i = 0; i < v.size(); i++)
        aux.pb(v[v.size() - i - 1]);
    return aux;
}

int main()
{
    ios_base::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
#endif
    bool flag = false, flag2 = false;
    int n;
    string s;

    cin >> n;
    vector<int> v1, v2, v3, v4;
    v1.resize(n);
    v2.resize(n);
    v3.resize(n);
    v4.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'X')
            {
                v2[i]++;
                v1[j]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'X')
            {
                v3[i]++;
                v4[j]++;
            }
        }
    }
    debug(v1, v2, v3, v4);

    if (v1 != v3)
    {
        v1 = flip(v1);
        if (v1 == v3)
        {
            flag = true;
        }
    }
    else
        flag = true;

    if (v1 != v4)
    {
        v1 = flip(v1);
        if (v1 == v4)
        {
            flag = true;
        }
    }
    else
        flag = true;

    if (v2 != v3)
    {
        v2 = flip(v2);
        if (v2 == v3)
            flag2 = true;
        }
    else
        flag2 = true;

    if (v2 != v4)
    {
        v2 = flip(v2);
        if (v2 == v4)
            flag2 = true;
    }
    else
        flag2 = true;

    if (flag && flag2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
