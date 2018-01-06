#include <bits/stdc++.h>

using namespace std;

int main() {
    int s[] = {5, 7, 5};
    bool isHaiku = true;
    for (int i = 0; i < 3; i++) {
        int res = 0;
        string str;
        getline(cin, str);
        for (char j: str) {
            if (j == 'a' || j == 'e' || j == 'i' || j == 'o' || j == 'u') {
                res++;
            }
        }
        if (res != s[i])
            isHaiku = false;
    }
    if (isHaiku)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
