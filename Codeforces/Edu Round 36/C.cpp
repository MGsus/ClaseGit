#include <bits/stdc++.h>

using namespace std;

int main( ) {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string a, r;
    long long b;
    cin >> a;
    cin >> b;
    sort(a.begin(), a.end());
    do {
        if (stoll(a) < b) {
            r = a;
        }
    }
    while (next_permutation(a.begin(), a.end()));
    cout << r;
    return 0;
}
