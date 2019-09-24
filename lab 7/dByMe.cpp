#include <iostream>
using namespace std; 
int main() {

		int n, m, s;
		cin >> n >> m;
		int a[n][m];
		int x, y;
		

for (int i = 0; i < n ; i++){
	for (int j = 0; j < m ; j++){
		cin >> a[i][j];
	}
}
int mx = a [0][0];
x = 0;
y = 0;

for (int i = 0; i < n; i++){
	for (int j = 0; j < m; j++){
	  if (a [i][j] > mx){
	  	mx = a [i][j];
	  	x = i;
	  	y = j;
	  }
	}
} cout << mx << " " << x << " " << y;

return 0;
}

