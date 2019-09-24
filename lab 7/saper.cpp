#include <iostream>
using namespace std; 
int main() {

int n, m, s, z;
cin >> n >> m;
int a[n][m];
int k;
cin >> k;
int x, y;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> x >> y;
		}
	}

	for (int currentrowindex = 0; currentrowindex<n; currentrowindex++){
		for (int j = 0; j<m; j++){
			if (currentrowindex==x && j==y) z=1;
			else s = 1;
		}
	}

	for (int i = 0; i<n; ++i){
		for (int j = 0; j < n; ++j){
			if (z==1) cout << "*" << " ";
			else if (s==1) cout << a[i][j] << " ";
		}
		cout << endl;
	}

return 0;
}