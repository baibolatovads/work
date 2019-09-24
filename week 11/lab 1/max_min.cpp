#include <iostream>
#include <cmath>
using namespace std;

int main (){

	int n, z, t, p, o;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	int k = a[0];
	t = a[0];
	for (int i = 0; i < n; i++){
		if (k>a[i]){
			k = a[i];
			p = i;
		}
		if (t < a[i]){
			t = a [i];
			o = i;
		}
	}

	swap (a[p], a[o]);	
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	return 0;
}