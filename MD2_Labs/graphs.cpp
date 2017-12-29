#include <bits/stdc++.h>

using namespace std;

int getDeg(int node, vector<vector<int>>& edges) {
    int d = 0;
    for (int i = 0; i < edges.size(); i++) {
        d += edges[node][i];
    }
    return d;
}

int getBucles(vector<vector<int>>& _edg) {
    int bNum = 0;
    for (int i = 0; i < _edg.size(); i++) {
        if (_edg[i][i] == 2) {
            bNum += 1;
        }
    }
    return bNum;
}

char getLetter(vector<vector<int>>& _edg) {
    char letter;
    for (int i = 0; i < _edg.size(); i++) {
        for (int j = 0; j < _edg.size(); j++) {
            if (_edg[i][j] == 1 && _edg[j][i] == 1) {
                letter = 'S';
            }
            else {
                letter = 'N';
            }
        }
    }
    return letter;
}

int main() {
    int casos;
    vector<vector<int>> _edges;
    int edgesNum;
    int nodos;
    int start;
    int end;

    scanf("%d", &casos);
    for (int i = 0; i < casos; i++) {
        scanf("%d", &nodos);
        _edges.resize(nodos);
        for (int l = 0; l < nodos; ++l) {
            _edges[l].resize(nodos);
        }
        scanf("%d", &edgesNum);
        for (int j = 0; j < edgesNum; j++) {
            scanf("%d %d", &start, &end);
            _edges[start][end] += 1;
        }
        cout << i + 1 << '\n';
        for (int k = 0; k < nodos; k++) {
            cout << getDeg(k, _edges) << ' ';
        }
        cout << '\n';
        cout << getBucles(_edges) << '\n';
        cout << getLetter(_edges) << '\n';
    }
    return 0;
}
