#include <bits/stdc++.h>
using namespace std;
int main(){

	freopen ("input.txt", "r", stdin);
	int n;
	cin >> n;
	int a, b, c, d;

	for (int i = 0; i < n; i++){
		cin >> a >> b >> c;
		d = a*3600 + b*60 + c;
		cout << d << endl;
	}
sort (d, n);

return 0;
}

