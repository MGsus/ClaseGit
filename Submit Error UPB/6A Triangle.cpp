#include <bits/stdc++.h>

using namespace std;

int a, b, c, d;
vector<int> v;

int main(int argc, char const *argv[]) {
    cin >> a >> b >> c >> d;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    sort(v.begin(), v.end());

    if (v[0] + v[1] > v[2] || v[1] + v[2] > v[3])
        cout << "TRIANGLE";
    else if (v[0] + v[1] == v[2] || v[1] + v[2] == v[3])
        cout << "SEGMENT";
    else
        cout << "IMPOSSIBLE";
    return 0;
}
