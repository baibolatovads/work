#include <bits/stdc++.h>
using namespace std;

int main(){

	/*freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
*/
	int n;
	cin >> n;
	int a[n];
	int s = 0;
	int max, min;
	int multiple = 1;
	int x, y;

	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	min = a[0];
	max = a[0];

		for (int i = 0; i < n; i++){
			if (max < a[i]){
				max = a[i];
				y = i;
			} 
			if (min > a[i]) {
				min = a[i];
				x = i;
			}
		} cout << min << " " << max << " " << x << " " << y <<  endl;

	for (int i = 0; i < n; i++){
		if (a[i] >= 0){
			s = s + a[i];
		}
	}

	for (int i = x; i < y; i++){
		multiple *= a[i];
	}

	cout << s << " " << multiple;

return 0;

}