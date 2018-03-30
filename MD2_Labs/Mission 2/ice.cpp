#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs(int u, vector<int> adj[], vector<bool> &visited) {
    visited[u] = true;
    cout << u << " ";
    for (int i = 0; i < adj[u].size(); i++) {
        if (visited[adj[u][i]] == false) {
            dfs(adj[u][i], adj, visited);
        }
    }
}

int main() {
    ofstream result("result.txt", ios::out);
    FILE *data;
    data = fopen("ice-easy-in.txt", "r");
    if (data == NULL) {
        cout << "Error abriendo archivo";
        exit(1);
    }

    int cases;
    fscanf(data, "%d", &cases);
    for (int i = 0; i < cases; i++) {
        int n = 0;
        fscanf(data, "%d", &n);
        string matrix;

        for (int j = 0; j < n; j++) {
            fscanf(data, "%s", &matrix);

            for (int k = 0; k < n; k++) {
                if (matrix[k] == '1') {
                    g.addEdge(j, k);
                }
            }
        }
    }
    return 0;
}
