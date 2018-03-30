#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll yellowC, yellowB, blueB, blueC, greenB;
    scanf("%lld %lld", &yellowC, &blueC);
    scanf("%lld %lld %lld", &yellowB, &greenB, &blueB);

    res = max(0LL, 2 * yellowB + greenB - yellowC) + max(0LL, 3 * blueB + greenB - blueC);
    cout << res;
    return 0;
}
