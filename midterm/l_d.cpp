#include <iostream>
using namespace std; 
int main() {

		int n, m, min = 0, k = 0;
		cin >> n >> m;
		int a[n][m];
		

for (int i = 0; i < n; i++){
	for (int j = 0; j < m; j++){
		cin >> a[i][j];
	}
}
int coolestrowindex;
for (int currentrowindex = 0; currentrowindex < n; currentrowindex++){
	for (int j = 0; j < m; j++){
		if (a[currentrowindex][j] > 0) 
			k++;
		if (min < k){
			min = k;
			coolestrowindex = currentrowindex;
		}
	}
}cout << coolestrowindex + 1;

return 0;
}

