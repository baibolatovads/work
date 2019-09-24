#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	int a[n], b[n], max = a[0], index;

		for (int i = 0; i < n; i++){
			cin >> a[i] >> b[i];
		}

		for (int i = 1; i <= n; i++){
			int index = i;
			if (b[i] == 1){
				if (max < a[i]){
					max = a[i];
					index = i;
				} 
			}
		}cout << index;

return 0;
}