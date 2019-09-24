#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	int a[n], b[n], max;

		for (int i = 0; i < n; i++){
			cin >> a[i] >> b[i];
		}

max = a[0];
int index = 0;

		for (int i = 0; i < n; i++){
			if (b[i] == 1){
				if (max < a[i]) 
					{
				max = a[i];
				index = i;
			}
		}
		}cout << index + 1;

	
return 0;
}
