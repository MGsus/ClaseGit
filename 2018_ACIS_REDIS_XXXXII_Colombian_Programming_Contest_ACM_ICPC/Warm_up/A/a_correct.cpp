#include <bits/stdc++.h>

#define LOCAL
#define endl '\n'

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
    cin.tie(0); // solamente LOCAL, si no, es mejor no colocarlo
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int N, I, J;
    while (cin >> N >> I >> J) // scanf("%d %d %d", &N, &I, &J) == 3
    {
        if (I > J)
            swap(I, J);
        int round;
        for (round = 1; round <= N; round++)
        {
            debug(round);
            if (I % 2 == 1 && J % 2 == 0 && (J - I) == 1)
                break;
            // Rama Izquierda
            if (I % 2 == 0)
                I >>= 1; // I /= 2;
            else
                I = (I + 1) >> 1;

            // Rama Derecha
            if (J % 2 == 0)
                J >>= 1;
            else
                J = (J + 1) >> 1;
            // Es el mismo caso: 1 2 & 2 1
            if (I > J)
                swap(I, J);
        }
        // printf("%d\n", round);
        cout << round << endl;
    }
}