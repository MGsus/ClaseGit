#include <bits/stdc++.h>
#define ll long long
#define MOD 100000

using namespace std;

string n;

int main(int argc, char const *argv[]) {
    cin >> n;
    ll int m = (n[0]-'0') * 10000 + (n[2]-'0') * 1000 + (n[4]-'0') * 100 + (n[3]-'0') * 10 + (n[1]-'0');
    ll ans = 1;
    for (int i = 1; i <= 5; i++)
        ans = (ans * m) % MOD;
    printf("%05d", ans);
    return 0;
}
