#include <bits/stdc++.h>

using namespace std;
int x,y,n;
double h=0,b=0;

int main(int argc, char const *argv[]) {
	freopen("h.txt","r",stdin);
	while (cin) {
		cin >> n;
		vector<int> axisX;
		vector<int> axisY;
		for (int i = 0; i < n ; i++ ) {
			cin >> x >> y;
			axisX.push_back(x);
			axisY.push_back(y);
		}
		sort(axisX.begin(),axisX.end());
		sort(axisY.begin(),axisY.end());
		h = axisY.back()-axisY.front();
		b = axisX.back()-axisX.front();
		cout << h << ' ' << b << ' ';
		double res = (b*h)/2;
		printf("%0.1f\n", res);
	}
	return 0;
}
