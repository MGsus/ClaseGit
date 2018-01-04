#include <bits/stdc++.h>

using namespace std;

bool result(int n) {
    if (n == 1 || n == 14 || n == 144)
        return true;
    if (n % 10 == 1 && result(n / 10))
        return true;
    if (n % 100 == 14 && result(n / 100))
        return true;
    if (n % 1000 == 144 && result(n / 1000))
        return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    if (result(n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
