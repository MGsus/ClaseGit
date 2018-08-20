#include <bits/stdc++.h>

using namespace std;

int getDeg(int node, vector<vector<int>> &edges)
{
    int d = 0;
    for (int i = 0; i < edges.size(); i++)
    {
        d += edges[node][i];
    }
    return d;
}

char getLetter(vector<vector<int>> &_edg)
{
    char letter = 'N';
    for (int i = 0; i < _edg.size(); i++)
    {
        for (int j = (i + 1); j < _edg.size(); j++)
        {
            if (_edg[i][j] >= 2)
            {
                letter = 'S';
                return letter;
            }
        }
    }
    return letter;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int casos;
    vector<vector<int>> _edges;
    int edgesNum;
    int nodos;
    int start;
    int end;

    freopen("grafos-hard-in.txt", "r", stdin); // Apertura de archivo que deja usar cin, cout, scanf, printf
    freopen("output.txt", "w", stdout);

    scanf("%d", &casos);
    for (int i = 0; i < casos; i++)
    {
        int bucles = 0;
        scanf("%d", &nodos);
        _edges.resize(nodos);
        for (int l = 0; l < nodos; ++l)
        {
            _edges[l].resize(nodos);
        }
        for (int k = 0; k < nodos; k++)
        {
            for (int l = 0; l < nodos; l++)
            {
                _edges[k][l] = 0;
            }
        }
        scanf("%d", &edgesNum);
        for (int j = 0; j < edgesNum; j++)
        {
            scanf("%d %d", &start, &end);
            _edges[start - 1][end - 1]++;
            _edges[end - 1][start - 1]++;
            if (start == end)
            {
                bucles++;
            }
        }
        cout << i + 1 << '\n';
        for (int k = 0; k < nodos; k++)
        {
            if (k == nodos - 1)
            {
                cout << getDeg(k, _edges);
            }
            else
            {
                cout << getDeg(k, _edges) << ' ';
            }
        }
        cout << '\n';
        cout << bucles << '\n';
        if (i == casos - 1)
        {
            cout << getLetter(_edges);
        }
        else
        {
            cout << getLetter(_edges) << '\n';
        }
    }
    return 0;
}
