#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin >> n;
	char a[n];
	vector<char> v;
	int k = 0, x = 0;

		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

		for(int i = 0; i < n; i++){
			if(a[i] == 'x' && a[i + 1] == 'x'){
				k++;
				if(k >= 2){
					x++;
				}
			}
			else {
				k = 0;
			}
		}

		cout << x;

	return 0;
}