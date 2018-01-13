#include <bits/stdc++.h>

using namespace std;

int main( ) {
    string a, r;
    long long int b;
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
