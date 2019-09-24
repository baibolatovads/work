#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int a, b;
	int d = 0, f = 0;

		while (cin >> a >> b){
			d = d + a;
			f = f + b;
		}

		if (d < f) cout << 2;
		else if (d > f) cout << 1;
		else cout << "DRAW";

return 0;
}