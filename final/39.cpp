#include <bits/stdc++.h>
using namespace std;

int main(){

	//freopen ("input.txt", "r", stdin);
	int n;
	cin >> n;
	int a[n][n];
	

		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}

		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cout << a[i][j] % (i + 1)<< " ";
			}cout << endl;
		}

return 0;
}