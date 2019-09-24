#include <iostream>
using namespace std;

int main(){

int n, mid;
cin >> n;
int a[n];

	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

int k;
cin >> k;

int l = 0;
int r = n - 1;
 
	while(l != r){
		for(int i = 1; i <= n; i++){
		mid = (l + r)/2;
		if (k > a[mid]) l = mid + 1;
		else r = mid;
		
	}
	}
	cout << r;



	return 0;
}