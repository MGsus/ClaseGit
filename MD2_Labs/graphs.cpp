#include <bits/stdc++.h>

using namespace std;

const int MAX = 100;

int getDeg(int node, int edges[][MAX]) {
    int d;
    int size = sizeof(edges) / sizeof(edges[0]);
    for (int i = 0; i < size; i++) {
        d += edges[node][i];
    }
    return d;
}
int getBucles(int _edg[][MAX]) {
    int size = sizeof(_edg) / sizeof(_edg[0]);
    int bNum = 0;
    for (int i = 0; i < size; i++) {
        if (_edg[i][i] == 2) {
            bNum += 1;
        }
    }
    return bNum;
}
char getLetter(int _edg[][MAX]) {
    char letter;
    int size = sizeof(_edg) / sizeof(_edg[0]);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (_edg[i][j] == 1 && _edg[j][i] == 1) {
                letter = 'S';
            }
            else{
                letter = 'N';
            }
        }
    }
    return letter;
}

int main() {
    int casos;
    int edgesNum;
    int nodos;
    int start;
    int end;

    scanf("%d", &casos);
    for (int i = 0; i < casos; i++) {
        scanf("%d", &nodos);
        int _edges[nodos][nodos];
        scanf("%d", &edgesNum);
        for (int j = 0; j < edgesNum; j++) {
            scanf("%d %d", &start, &end);
            _edges[start][end] += 1;
        }
        printf("%d\n", &i);
        for (int k = 0; k < nodos; k++) {
            cout << getDeg(k, _edges) << ' ';
        }
        cout << '\n';
        cout << getBucles(_edges) << '\n';
        cout << getLetter(_edges) << '\n';
    }
    return 0;
}
