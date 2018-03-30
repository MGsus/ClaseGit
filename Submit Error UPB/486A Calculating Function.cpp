#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll int n;
ll int res;

int main(int argc, char const *argv[]) {
    cin >> n;
    if (n % 2 == 0)
        res = n / 2;
    else
        res = -(n + 1) / 2;
    cout << res;
    return 0;
}
