#include <bits/stdc++.h>

using namespace std;

int main( ) {
    int n;
    cin >> n;
    vector<int> p(n), deg(n);

    for (int i = 1; i < n; i++) {
        cin >> p[i];
        p[i]--;
        deg[p[i]]++;
    }

    vector<int> sons(n);
    for (int i = 0; i < n; i++) {
        if (deg[i] == 0) {
            sons[p[i]]++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (deg[i] > 0 && sons[i] < 3) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
