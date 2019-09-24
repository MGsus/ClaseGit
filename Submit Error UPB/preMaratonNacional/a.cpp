#include <bits/stdc++.h>

#define mp make_pair
#define put insert
#define endl '\n'
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)

using namespace std;

int main()
{
    map<string, int> month, day;

    month.insert(mp("JAN", 31));
    month.insert(mp("FEB", 28));
    month.insert(mp("MAR", 31));
    month.insert(mp("APR", 30));
    month.insert(mp("MAY", 31));
    month.insert(mp("JUN", 30));
    month.insert(mp("JUL", 31));
    month.insert(mp("AUG", 31));
    month.insert(mp("SEP", 30));
    month.insert(mp("OCT", 31));
    month.insert(mp("NOV", 30));
    month.insert(mp("DEC", 31));

    day.put(mp("SUN", 0));
    day.put(mp("MON", 1));
    day.put(mp("TUE", 2));
    day.put(mp("WED", 3));
    day.put(mp("THU", 4));
    day.put(mp("FRI", 5));
    day.put(mp("SAT", 6));

    int n;
    cin >> n;
    string m, d;
    forn(i, n)
    {
        int wd = 8, dif = 0;
        cin >> m >> d;
        if (day[d] == 6)
            wd = 7;
        dif = month[m] - 28;
        if (dif + day[d] - 1 == 5)
            wd++;
        else if (dif + day[d] - 1 >= 6)
            wd += 2;
        cout << wd << endl;
    }

    return 0;
}
