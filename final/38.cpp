#include <bits/stdc++.h>
using namespace std;
int main(){

	//freopen ("input.txt", "r", stdin);
	int n;
	cin >> n;
	int a[n], b[n];
	int d = 0;
	vector <int> v;

		for (int i = 0; i < n; i++){
				cin >> a[i]; 
		}

		for (int i = 0; i < n; i++){
			cin >> b[i];
		}

		for (int i = 0; i < n; i++){
				d = d + (a[i] * b[i]);
		}cout << d;

return 0;
}