#include <bits/stdc++.h>

using namespace std;

string word_a, word_b, ans;
int count_c;

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    while (true) {
        count_c++;
        cin >> word_a >> word_b;
        if (word_a != "END" && count_c != 1) {
            cout << '\n';
        }
        if (word_a == "END" && word_b == "END") {
            return 0;
        }

        for (int i = 0; i < word_a.length(); i++) {
            if (word_b.find(word_a[i]) != string::npos) {
                word_b.erase(word_b.find(word_a[i]), 1);
                word_a.erase(i, 1);
            }
        }
        if (word_a == word_b)
            cout << "Case " << count_c << ": " << "same";
        else
            cout << "Case " << count_c << ": " << "different";
    }
}
