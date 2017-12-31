#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos;

    ofstream result("result.txt", ios::out);
    FILE *data;
    data = fopen("ice-easy-in.txt", "r");
    if (data == NULL) {
        cout << "Error abriendo archivo";
        exit(1);
    }
    fscanf(data, "%d", &casos);
    return 0;
}
