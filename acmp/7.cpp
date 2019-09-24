#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	long long a, b, c;
	cin >> a >> b >> c;
	long long d =  max(a, b);
	if (d < c){
		d = c;
	}cout << d;

return 0;
}
