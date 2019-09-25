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

string toLower(string a)
{
    forn(i, a.size())
        a[i] = tolower(a[i]);
    return a;
}

bool cmpStr(string a, string b)
{
    return toLower(a) < toLower(b);
}
bool cmp(pair<int, string> &a, pair<int, string> &b)
{
    if (a.first != b.first)
        return a.first > b.first;
    return cmpStr(a.second, b.second);
}
int main()
{
    int n, cases = 0;
    char s[1024];
    while (scanf("%d", &n) == 1)
    {
        while (getchar() != '\n')
            ;
        vector<pair<int, string>> A;
        A.reserve(n);
        forn(i, n)
        {
            fgets(s, 1024, stdin);
            char *tok = strtok(s, ";");
            string name = tok;
            debug(name);
            tok = strtok(NULL, ";");
            int pts = 0;
            while (tok != NULL)
            {
                int a, b, c, d, e;
                sscanf(tok, "%d %d %d %d %d", &a, &b, &c, &d, &e);
                pts += (a + b + c + d) + e * 2;
                tok = strtok(NULL, ";");
            }
            A.eb(make_pair(pts, name));
        }
        debug(A);
        sort(all(A), cmp);
        printf("Case %d:\n", ++cases);
        fore(e, A)
            printf("%s %d\n", e.se.c_str(), e.fi);
    }
    return 0;
}
/*
3
Michael Jordan;0 1 1 0 1;0 1 1 0 1;0 1 1 0 1;0 0 0 0 1;0 0 0 0 1
Scotty Pippen;0 1 1 0 1;0 1 1 0 1;0 1 1 0 1;0 0 0 0 1;0 0 0 1 1
Charles Barkley;0 1 1 0 1;0 1 1 0 1;0 1 1 0 1;0 0 0 0 1;0 0 1 1 1
*/