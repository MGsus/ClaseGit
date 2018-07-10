#include <bits/stdc++.h>

using namespace std;

int n, y;
vector<int> v;

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    cin >> y;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1)
            v.push_back(y);
        y = x;
    }
    v.push_back(y);
    cout << v.size() << endl;
    for (int item: v)
        cout << item << " ";
    return 0;
}
