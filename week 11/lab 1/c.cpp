#include <bits/stdc++.h>
using namespace std;

void max_min (int n, int * a){
	int max = 0;
	int min = 0;
	for (int i = 0; i < n; i++){
		if (a[i] < a [min])
		min = i;

		if (a[i] > a[max])
		max = i;
	}

	int tmp = a[max];
	a[max] = a[min];
	a[min] = tmp;

	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}

int main(){

int n;
cin >> n;
int a[n];

for (int i = 0; i < n; i++){
	cin >> a[i];
}

max_min (n, a);

	
return 0;

}