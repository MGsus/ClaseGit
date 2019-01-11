#include <bits/stdc++.h>

using namespace std;

int n, a, item, res = 0, resta = 1000000000;
vector<int> v;
ptrdiff_t index;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    while (!v.empty())
    {
        item = v.back();
        v.pop_back();

        if (find(v.begin(), v.end(), item) != v.end())
        {
            v.erase(find(v.begin(), v.end(), item));
            res += 0;
        }
        else
        {
            for (auto &&i : v)
            {
                ptrdiff_t pos = find(v.begin(), v.end(), i) - v.begin();
                int temp = abs(item - i);
                if (temp < resta)
                {
                    resta = temp;
                    index = pos;
                }
            }
            v.erase(find(v.begin(), v.end(), v[index]));
            res += resta;
        }
    }
    cout << res << endl;

    return 0;
}
