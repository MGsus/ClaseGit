#include <bits/stdc++.h>

using namespace std;

int main(void) {
    char compare;
    printf("Enter the char to compare:");
    cin >> compare;
    switch (compare) {
    case 'y': cout << "You chose " << compare << endl;
        break;
    case 'Y': cout << "You chose " << compare << endl;
        break;
    case 'N': cout << "You chose " << compare << endl;
        break;
    case 'n': cout << "You chose " << compare << endl;
        break;
    default: cout << "You didn't choose the valid option" << endl;
    }
}
