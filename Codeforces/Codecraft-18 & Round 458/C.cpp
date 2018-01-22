#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const int MAXN = 1010;

char ch[MAXN];
int k, n, f[MAXN], dp[MAXN];

int main(int argc, char const *argv[]) {
    cin >> ch+1;
    cin >> k;
    n = strlen(ch+1);
    if (k == 0)
        return std::cout << "1", 0;
    f[1] = 0;
    for (int i = 2; i <= n; i++)
        f[i] = f[__builtin_popcount(i)] + 1;
    int pre = 0;
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j; j--)
            dp[j] = (dp[j] + dp[j - 1]) % MOD;
        if (ch[i] == '1')
            dp[pre]++;
        pre += ch[i] - '0';
    }
    dp[pre]++;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (f[i] == k - 1)
            ans = (ans + dp[i]) % MOD;
    }
    if (k == 1)
        ans = (ans - 1 + MOD) % MOD;
    return std::cout << ans, 0;
}
