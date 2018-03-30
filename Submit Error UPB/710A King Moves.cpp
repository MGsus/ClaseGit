#include <bits/stdc++.h>

using namespace std;

char c;
char d;

int r = 0;

int main(int argc, char const *argv[]) {
    cin >> c >> d;
    if (c == 'a' || c == 'h')
        r++;
    if (d == '1' || d == '8')
        r++;
    if (r == 2)
        r++;
    if (r == 1)
        r += 4;
    if (r == 0)
        r = 8;
    cout << r;
    return 0;
}
