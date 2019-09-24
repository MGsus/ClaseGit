#include <bits/stdc++.h>

#define mp make_pair
#define put insert
#define fi first
#define se second
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define fore(i, n) for (auto &i : n)

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
    bool val = true;
    vector<int> res;

    while (val)
    {
        int s = 0, v = 0, sup = 0, vil = 0, cont = 0;
        vector<int> vSup, vVil;
        cin >> s >> v;
        if (s == 0 && v == 0)
        {
            val = false;
            break;
        }
        forn(i, s)
        {
            cin >> sup;
            vSup.pb(sup);
        }
        forn(i, v)
        {
            cin >> vil;
            vVil.pb(vil);
        }
        forn(i, vSup.size())
        {
            forn(j, vVil.size())
            {
                if (vSup[i] > vVil[j] && vVil[j] > -1)
                {
                    vSup[i] -= vVil[j];
                    vVil[j] = -1;
                    cont++;
                }
                else if (vSup[i] < vVil[j] && vSup[i] > -1)
                {
                    vVil[j] -= vSup[i];
                    vSup[i] = -1;
                }
                else if (vSup[i] == vVil[j] && vVil[j] > -1 && vSup[i] > -1)
                {
                    vSup[i] = -1;
                    vVil[j] = -1;
                }
            }
        }
        res.pb(cont);
    }
    fore(i,res)
        cout << i << endl;

    return 0;
    // Example input
    // 1 1
    // 200
    // 100
    // 1 2
    // 200
    // 100
    // 100
    // 0 0
}