#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char word[100];
        cin >> word;
        int tam = strlen(word);
        if (tam > 10) {
            cout << word[0] << tam - 2 << word[tam - 1] << '\n';
        }
        else{
            cout << word << "\n";
        }
    }
    return 0;
}
