#include <iostream>
using namespace std; 
int main() {

		int n, m, s;
		cin >> n >> m;
		int a[n][m];
		

for (int i = 0; i < n ; i++){
	for (int j = 0; j < m ; j++){
		cin >> a[i][j];
	}
}

int CoolestRowIndex = 0;
int CoolestRowSum = 0;

	for (int currentRowIndex = 0; currentRowIndex < n -1 ; currentRowIndex++){
	int currentRowSum = 0;
	for (int j = 0; j < m - 1; j++){
		currentRowSum = currentRowSum + a[currentRowIndex][j];
	}
		if (CoolestRowSum < currentRowSum){
			CoolestRowSum = currentRowSum;
			CoolestRowIndex = currentRowIndex;
		}
	} 

	cout << CoolestRowSum << " " << CoolestRowIndex; 



		return 0;
	}
