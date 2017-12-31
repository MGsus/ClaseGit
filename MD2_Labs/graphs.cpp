#include <bits/stdc++.h>

using namespace std;

int getDeg(int node, vector<vector<int>> &edges) {
    int d = 0;
    for (int i = 0; i < edges.size(); i++) {
        d += edges[node][i];
    }
    return d;
}

char getLetter(vector<vector<int>> &_edg) {
    char letter = 'N';
    for (int i = 0; i < _edg.size(); i++) {
        for (int j = (i + 1); j < _edg.size(); j++) {
            if (_edg[i][j] >= 2) {
                letter = 'S';
                return letter;
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

    ofstream afile("result.txt", ios::out);
    FILE *data;
    char name[25];
    scanf("%s", name);
    data = fopen(name, "r");
    if (data == NULL) {
        cout << "Error de apertura del archivo";
        exit (1);
    }

    fscanf(data, "%d", &casos);
    for (int i = 0; i < casos; i++) {
        int bucles = 0;
        fscanf(data, "%d", &nodos);
        _edges.resize(nodos);
        for (int l = 0; l < nodos; ++l) {
            _edges[l].resize(nodos);
        }
        for (int k = 0; k < nodos; k++) {
            for (int l = 0; l < nodos; l++) {
                _edges[k][l] = 0;
            }
        }
        fscanf(data, "%d", &edgesNum);
        for (int j = 0; j < edgesNum; j++) {
            fscanf(data, "%d %d", &start, &end);
            _edges[start - 1][end - 1]++;
            _edges[end - 1][start - 1]++;
            if (start == end) {
                bucles++;
            }
        }
        afile << i + 1 << '\n';
        for (int k = 0; k < nodos; k++) {
            if (k == nodos - 1) {
                afile << getDeg(k, _edges);
            }
            else {
                afile << getDeg(k, _edges) << ' ';
            }

        }
        afile << '\n';
        afile << bucles << '\n';
        if (i == casos - 1) {
            afile << getLetter(_edges);
        }
        else {
            afile << getLetter(_edges) << '\n';
        }

    }
    fclose(data);
    return 0;
}
