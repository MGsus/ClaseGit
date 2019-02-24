#include <bits/stdc++.h>
//#define DEBUG

#ifdef DEBUG
#define debug(x, i) cerr << #x << ": " << x << " " << #i << ": " << i << endl
#else
#define debug(x, i)
#endif

using namespace std;
int x, y, n, cont = 0;
double h = 0, b = 0;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	while (cin >> n)
	{
		cont += 1;
		vector<int> axisX;
		vector<int> axisY;
		for (int i = 1; i <= n; i++)
		{
			cin >> x >> y;
			axisX.push_back(x);
			axisY.push_back(y);
		}
		sort(axisX.begin(), axisX.end());
		sort(axisY.begin(), axisY.end());
		h = axisY.back() - axisY.front();
		b = axisX.back() - axisX.front();
		debug(h, cont);
		debug(b, cont);
		double res = (b * h) / 2;

		printf("%0.1f\n", res);
	}
	return 0;
}
