#include <bits/stdc++.h>
using namespace std;
int main(){

	int n[3], k = 0;

	for (int i = 0; i < 3; i++){
		cin >> n[i];
	}

	for (int i = 0; i < 3; i++){
		if (n[i] == n[i+1]) {
			k++;
	}
}cout << k;
return 0;
}