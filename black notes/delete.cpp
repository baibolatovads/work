#include <iostream>
using namespace std; 
int main() {

		int n, m, s = 0;
		cin >> n >> m;
		int a[n][m];
		

		for (int i = 0; i < n ; i++){
			for (int j = 0; j < m ; j++){
					a[i][j] = s;
					s=s+1;
		}
	}

		for (int i = 0; i<n; ++i){
		for (int j = 0; j < m ; ++j){
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}

return 0; 
}