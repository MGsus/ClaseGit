#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll int x, y, org, copy;

int main( ) {
    cin >> x >> y;
    if (y < 2 && x != 0)
        return cout << "NO", 0;
    x -= y - 1;
    if (x % 2 == 0 && x >= 0)
        return cout << "YES", 0;
    else
        return cout << "NO", 0;
}
