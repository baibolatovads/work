#include <bits/stdc++.h>
using namespace std;

int main(){

	//freopen ("input.txt", "r", stdin);
	int n;
	cin >> n;
	int a[n][n];
	int maxx = 0;
	int index = 0;

		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}cout << endl;

		for (int i = 0; i < n;  i++){
			for (int j = 0; j < n; j++){
				if (a[i][j] > maxx){
					maxx = a[i][j];
					index = j;
		}
	}swap (a[i][i], a[i][index]);
	maxx = 0;
}



		for (int i = 0; i < n; i++){
			for (int j = 0; j< n; j++){
				cout << a[i][j] << " ";
			}cout << endl;
		}
	return 0;
}