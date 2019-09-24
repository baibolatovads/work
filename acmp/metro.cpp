#include <bits/stdc++.h>
using namespace std;

int main(){

freopen ("input.txt", "r", stdin);
freopen ("output.txt", "w", stdout);

int n;
int a, b;
int c = 0, d = 0, g = 0;

cin >> n >> a >> b;
//1 2 3 4 5 6 7 8 9 10
	/*for (int i = a + 1; i <= n; i++){
		if((i > a) && (i < b)) c++;
	}

	for (int i = b; i < n; i++){
		d++;
	}
		for (int j = 1; j < a; j++){
			g++;
	} int k = d + g;

	if (c <= k) cout << c;
	else cout << k; 
*/

	cout << min (abs(b - a), abs(n - abs(b - a))) - 1;
return 0;

}