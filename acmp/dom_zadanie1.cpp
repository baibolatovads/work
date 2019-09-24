#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	long long a, b, c, d;
	cin >> a >> b >> c >> d;

	for (int i = -100; i <= 100; i++){
		if (pow(i, 3) * a + pow(i, 2) * b + i * c + d == 0)
			cout << i << " ";
	}

return 0;
}