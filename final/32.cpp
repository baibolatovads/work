#include <bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin >> n;
	int k = 0;

		for (int i = 1; i <= n; i++){
			if (i % 3 == 0) k++;
		}cout << k;

return 0;
}