#include <bits/stdc++.h>

using namespace std;

float a, b, c;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> a >> b >> c;
    float res = (a + b + c) + (a + b + c);
    printf("%0.6f", res);
    return 0;
}
