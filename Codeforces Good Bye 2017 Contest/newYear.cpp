#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    int res = 0;
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u') {
            res++;
        }
        if (input[i] == '1' || input[i] == '3' || input[i] == '5' || input[i] == '7' || input[i] == '9') {
            res++;
        }
    }
    cout << res;
    return 0;
}
