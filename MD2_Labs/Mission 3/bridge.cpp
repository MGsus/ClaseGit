#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    unsigned int n;
    vector<vector<int>> _edges;
    string s;

    ofstream ofile("result.txt", ios::out);
    ifstream data("bridges-easy-in.txt", ios::in);

    data >> t;
    for (int i = 0; i < t; i++) {
        data >> n;
        _edges.resize(n);
        for (int j = 0; j < n; ++j) {
            _edges[j].resize(n);
        }
        bool visited[n] = {false};
        int stack[n] = {0};
        int size = 0;
        for (int k = 0; k < n; k++) {
            for (int l = 0; l < n; l++) {
                _edges[k][l] = 0;
            }
        }
        for (int g = 0; g < n; g++) {
            data >> s;
            for (int m = 0; m < s.length(); m++) {
                if (s[m] == '1') {
                    _edges[g][m]++;
                }
            }
        }
        int nI = 0;
        stack[size] = nI;
        size++;

        while (size != 0) {
            nI = stack[size];
            visited[nI] = true;
            size--;

            for (int nV = 0; nV < n; nV++) {
                if (!visited[nV] && _edges[nI][nV] == 1) {
                    visited[nV] = true;
                    size++;
                    stack[size] = nV;
                }
            }
        }
        int count = 0;
        for (int q = 0; q < n; q++) {
            if (visited[q]) {
                count++;
            }
        }
        if (i == t - 1) {
            if (count == n)
                ofile << "POSIBLE";
            else
                ofile << "IMPOSIBLE";
        }
        else{
            if (count == n)
                ofile << "POSIBLE" << endl;
            else
                ofile << "IMPOSIBLE" << endl;
        }
    }
    return 0;
}
