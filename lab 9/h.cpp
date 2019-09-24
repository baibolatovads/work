#include <iostream>

using namespace std;

long long a[200]; 

int main(){

	int n;
	cin >> n;

	a[1] = 0;
	a[2] = 1;

	for(int i = 3; i <=n; ++i){
		a[i] = a[i-1] + a[i-2];
	}

	cout << a[n] << endl;
	
	return 0;
}