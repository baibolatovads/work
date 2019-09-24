
#include <iostream>
using namespace std; 
int main() {

		int n, m;
		cin >> n >> m;
		int a[n][m];
		int x, y;
		

		for (int i = 0; i < n ; i++){
			for (int j = 0; j < m ; j++){
					cin >> a[i][j];
		}
	}

int mx = a[0][0];
x = 0;
y = 0;
int CoolestSum = 0;
int CoolestRowIndex = 0;
int currentrowsum = 0;
int d, k;

		for (int currentrowindex = 0; currentrowindex < n; currentrowindex++){
			for (int j = 0; j < m; j++){
		
				if (mx < a [currentrowindex][j]){
					mx = a [currentrowindex][j];
					x = currentrowindex;
					y = j;
					d = 1;
				} else if (mx == a [currentrowindex][j]) {
						currentrowsum = currentrowsum + a[currentrowindex][j]; 
						CoolestSum = currentrowsum;
						CoolestRowIndex = currentrowindex;
						k = 1;
				}
			}
		} 	if (d == 1) cout << x;
				else if (k == 1) cout << CoolestRowIndex;
return 0;
}