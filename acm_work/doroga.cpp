#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;
	int a[n][n];
	int count = 0, k = 0;

		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if (i == j && a[i][j] == 1){ //diagonal
				count++;
			}
			else if (a[i][j] == 1 && a[j][i] == 1){ //symmetric
				k++;	
			}
			else if (a[i][j] == 1) count++;
		}
	}cout << count + k/2;

return 0;
}