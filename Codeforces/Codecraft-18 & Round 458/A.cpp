#include <bits/stdc++.h>

#define ll long long
using namespace std;

ll n, x, aux = -10e6;
vector<ll> v;

bool isPerfect(ll n) {
    if (n <= 0)
        return false;
    int root(round(sqrt(n)));
    return n == root * root;
}

int main() {
    cin >> n;
    for (ll i = 0; i < n; i++) {
        std::cin >> x;
        v.push_back(x);
    }
    for (ll i: v) {
        if (!isPerfect(i)) {
            if (i > 0) {
                if (i > aux)
                    aux = i;
            }
            else if (i < 0) {
                if (i > aux)
                    aux = i;
            }
        }
    }
    cout << aux, 0;
}
