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

#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
#endif

    int H = 0, M = 0;
    scanf("%d:%d", &H, &M);
    int h1 = H / 10, h2 = H % 10, m1 = M / 10, m2 = M % 10;

    while (true)
    {
        debug(h1, h2, m1, m2);
        if (h1 == 2 && h2 == 3 && m1 == 5 && m2 == 9)
        {
            h1 = 0, h2 = 0, m1 = 0, m2 = 0;
            break;
        }
        if (m2 == 9)
        {
            m2 = 0;
            if (m1 == 5)
            {
                m1 = 0;
                if (h2 == 9)
                {
                    h2 = 0;
                    h1++;
                }
                else
                    h2++;
            }
            else
                m1++;
        }
        else
            m2++;

        if ((h1 == m2) && (h2 == m1))
            break;
    }
    printf("%d%d:%d%d", h1, h2, m1, m2);

    return 0;
}