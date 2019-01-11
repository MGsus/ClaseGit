#include <bits/stdc++.h>

using namespace std;

long int n;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;

    if (n % 4 == 0 || (n + 1) % 4 == 0)
        cout << 0;
    else
        cout << 1;
    return 0;
}
