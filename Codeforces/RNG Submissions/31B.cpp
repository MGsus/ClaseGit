#include <bits/stdc++.h>

using namespace std;

string s, t;
const string no = "No solution";

int main( ) {
    cin >> s;
    int flag = 0;
    for (char c: s) {
        if (flag == 0) {
            if (c == '@') {
                cout << no << endl;
                return 0;
            }
            t += c;
            flag = 1;
        }
        else if (flag == 1) {
            if (c == '@') {
                flag = 2;
            }
            t += c;
        }
        else if (flag == 2) {
            if (c == '@') {
                cout << no << '\n';
                return 0;
            }
            t += c;
            flag = 3;
        }
        else if (flag == 3) {
            if (c == '@') {
                cout << no << '\n';
                return 0;
            }
            t += c;
            flag = 4;
        }
        else{
            if (c == '@') {
                char tmp = t.back();
                t.pop_back();
                t += ',';
                t += tmp;
                flag = 2;
            }
            t += c;
        }
    }
    if (flag == 1 || flag == 2) {
        cout << no << endl;
        return 0;
    }
    cout << t << endl;
    return 0;
}
