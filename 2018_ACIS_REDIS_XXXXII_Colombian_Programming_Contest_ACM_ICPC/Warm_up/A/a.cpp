#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

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

long rise(int base, unsigned int exponent)
{
    long result;
    if (exponent == 0)
        return 1;
    result = rise(base, exponent / 2);
    if (exponent % 2 == 0) // exponent & 1
        return result * result;
    else
    {
        if (exponent > 0)
            return base * result * result;
        else
            return (result * result) / base;
    }
}

pair<bool, int> binarySearch(vector<int> v, int _first, int _last, int _val)
{
    int _cont = 1;
    pair<bool, int> rn;
    bool flag = false;
    while (_first <= _last)
    {
        int mid = _first + (_last - _first) / 2;
        if (v[mid - 1] == _val)
        {
            rn = make_pair(flag, _cont);
            return rn;
        }
        if (v[mid - 1] < _val)
        {
            if (_cont == 1)
                flag = true; // true = right

            _cont += 1;
            _first = mid + 1;
        }
        else
        {
            if (_cont == 1)
                flag = false; // flase = left

            _cont += 1;
            _last = mid - 1;
        }
    }
}

int n, i, j, cont = 0;

int main(int argc, char const *argv[])
{
    // 3 2 5
    // 3 5 7
    // 2 1 2
    // 2 2 1
    ios_base::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    auto s1 = std::chrono::high_resolution_clock::now();
    while (cin >> n)
    {
        int _size = (rise(2, n));
        cin >> i >> j;
        vector<int> p1(_size);
        for (int l = 0; l < _size; l++)
            p1[l] = l + 1;
        pair<bool, int> round_i = binarySearch(p1, p1.front(), p1.back(), i);
        pair<bool, int> round_j = binarySearch(p1, p1.front(), p1.back(), j);

        if (round_i.first == false and round_j.first == true)
            cout << n << '\n';
        else if (j % 2 == 0 and (i + 1) == j)
            cout << 1 << '\n';
        else if (round_i.first == round_j.first)
            if ((round_i.second == round_j.second) || round_i.second < round_j.second || round_i.second > round_j.second)
                cout << n - 1 << '\n';
    }
    auto s2 = high_resolution_clock::now();
    auto finalT = duration_cast<milliseconds>(s2 - s1);
    cout << "===\n" << finalT.count() << " ms";

    return 0;
}
