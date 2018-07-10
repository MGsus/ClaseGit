#include <bits/stdc++.h>

using namespace std;

int n;
string str;

int main(int argc, char const *argv[]) {
    map<string, string> data;
    data["purple"] = "Power";
    data["green"] = "Time";
    data["blue"] = "Space";
    data["orange"] = "Soul";
    data["red"] = "Reality";
    data["yellow"] = "Mind";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        data[str] = "";
    }
    cout << 6 - n << '\n';
    for (auto item : data)
        if (!item.second.empty())
            cout << item.second << '\n';
    return 0;
}
