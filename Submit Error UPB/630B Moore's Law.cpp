#include <bits/stdc++.h>
#define ll long long
#define moore 1.000000011

using namespace std;

ll int n, t;

int main(int argc, char const *argv[]) {
    cin >> n >> t;
    cout << n * pow(moore, t);
    return 0;
}
