//My code wrong code :(
/*
 #include <bits/stdc++.h>

   using namespace std;

   long long int yellowC, blueC, yellowB, greenB, blueB, res;

   int main() {

    scanf("%d %d", &yellowC, &blueC);
    scanf("%d %d %d", &yellowB, &greenB, &blueB);

    if (yellowC == (yellowB * 2)) {
        yellowC = 0;
    }
    else{
        yellowC -= yellowB * 2;
    }
    if (blueC == (blueB * 3)) {
        blueC = 0;
    }
    else{
        blueC -= blueB * 3;
    }
    if (yellowC == 0 && blueC == 0) {
        res = greenB * 2;
    }
    else if ((yellowC + blueC) == (greenB * 2)) {
        res = 0;
    }
    else if (greenB * 2 - yellowC - blueC < 0) {
        res = 0;
    }
    else{
        res = greenB * 2 - yellowC - blueC;
    }
    cout << res;
    return 0;
   }
 */
// Good Code

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ll yellowC, yellowB, blueB, blueC, greenB;
    scanf("%lld %lld", &yellowC, &blueC);
    scanf("%lld %lld %lld", &yellowB, &greenB, &blueB);

    res = max(0LL, 2 * yellowB + greenB - yellowC) + max(0LL, 3 * blueB + greenB - blueC);
    cout << res;
    return 0;
}
