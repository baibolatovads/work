#include <bits/stdc++.h>
using namespace std;

void sum_of_neighbours (int n, int * a){
	int t = 0;
	for (int i = 0; i < n; i++){
		if (a[i-1]+a[i+1]==a[i]) cout << a[i] << " ";
	}
}

int main (){
	int n; 
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	sum_of_neighbours(n, a);
}