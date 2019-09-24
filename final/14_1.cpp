#include <bits/stdc++.h>
using namespace std;

int main(){

	//freopen ("input.txt", "r", stdin);
	int n;
	cin >> n;
	int a[n];
	int min = 10010100;
	int index = 0;

		for (int i = 0; i < n; i++){
			cin >> a[i];
			if (a[i] < min){
				min = a[i];
				index = i;
			}
		}

		for (int i = 0; i < n; i++){
			if (index == i){
				continue;
			} 
			cout << a[i] << " ";
		}cout << min;
	return 0;
}