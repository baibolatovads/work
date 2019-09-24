#include <bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin >> n;
	int a[n];

		for (int i = 0; i < n; i++){
			cin >> a[i];
		}

	int m;
	cin >> m;
	int mindelt = abs(a[0] - m);
	int jakin = a[0];

		for (int i = 0; i < n; i++){
			if (abs(a[i] - m) < mindelt){
				mindelt = abs(a[i] - m);
				jakin = a[i];
			}
		} cout << jakin;

	return 0;
}