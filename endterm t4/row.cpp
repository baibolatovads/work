#include <bits/stdc++.h>
using namespace std;
int main(){

//freopen ("input.txt", "r", stdin);
int n, m;
cin >> n >> m;
int a[n][m];

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}

int CoolestRowSum = 0;
int CoolestRowIndex = 0;

	for (int CurrentRowIndex = 0; CurrentRowIndex < n; CurrentRowIndex++){
		int CurrentRowsum = 0;
		for (int j = 0; j < m; j++){
			CurrentRowsum = CurrentRowsum + a[CurrentRowIndex][j];
		}
		if(CoolestRowSum < CurrentRowsum){
			CoolestRowSum = CurrentRowsum;
			CoolestRowIndex = CurrentRowIndex;
		}
	}cout << CoolestRowIndex + 1;

return 0;
}