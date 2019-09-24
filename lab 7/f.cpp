#include <iostream>
using namespace std; 
int main() {

		int n, m, s = 0;
		cin >> n >> m;
		int a[n][m];
		

		for (int i = 0; i < n ; i++){
			for (int j = 0; j < m ; j++){
					cin >> a[i][j];
		}
	}

int mx = a [0][0];
		for (int i = 0; i < n ; i++){
			for (int j = 0; j < m ; j++){
				if (mx < a [i][j]){
					mx = a [i][j];
}
}
}

for (int currentrowindex = 0; currentrowindex < n ; currentrowindex++){
			for (int j = 0; j < m ; j++){
				if (mx == a[currentrowindex][j]){
				s++;
				break;
		}

	}
	} 
	cout << s << endl;
return 0;
}
