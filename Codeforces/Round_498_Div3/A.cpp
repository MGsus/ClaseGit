#include <bits/stdc++.h>

using namespace std;

int n;
long long int x;
vector<long long int> v;

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    for (int i = 1; i <= 10e9; i++) {
        if (i % 2 == 0)
            replace(v.begin(), v.end(), i, i - 1);
        else
            replace(v.begin(), v.end(), i, i + 1);
    }
    /*
        for (auto item: v) {
            if (item % 2 == 0)
                replace(v.begin(), v.end(), item, item - 1);
            else
                replace(v.begin(), v.end(), item, item + 1);
        }
     */
    for (auto i: v) {
        cout << i << " ";
    }
    return 0;
}

/*
 #include <bits/stdc++.h>
   using namespace std;
   int n,x;
   int main(int argc, char const *argv[]) {
   cin >> n;
   for (int i = 0; i < n; i++) {
     cin >> x;
     if (x%2==0)
       x--;
     cout << x << " ";
   }
   return 0;
   }
 */
