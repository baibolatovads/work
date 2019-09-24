#include <bits/stdc++.h>
using namespace std;
int main(){

	double n, m;
	cin >> n >> m;
	double usd;

	usd = m * 1.3075;

	double tg;

	tg = usd * 150.55;

	int cost = n/tg;
	cout << cost;

return 0;
} 