#include <bits/stdc++.h>

using namespace std;

string word;

int main() {
    cin >> word;
    for (int i = 0; i < word.length(); i++) {
        word[i] = tolower(word[i]);

        if (word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] !=
            'o' && word[i] != 'u' && word[i] != 'y')
            cout << "." << word[i];
    }
    return 0;
}
