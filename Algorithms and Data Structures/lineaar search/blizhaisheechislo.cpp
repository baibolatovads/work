#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n, idx = 0;
	cin >> n;
	int a[n];
	

			for (int i = 0; i < n; i++){
				cin >> a[i];
			}

	int k;
	cin >> k;
	int index;
	int min = 2000;
//sort(a, a + n);

	for (int i = 0; i < n; i++){
				if(abs(k - a[i]) < min){
					idx = i;
					min = abs(k - a[i]);
				}
			}cout << a[idx];

return 0;
}