#include <bits/stdc++.h>

using namespace std;

int a, b, c, d;
float x1, x2;

int main(int argc, char const *argv[]) {
    cin >> a >> b >> c;
    d = (b * b) - 4 * a * c;
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    printf("%0.15f\n", max(x1, x2));
    printf("%0.15f", min(x1, x2));
    return 0;
}
