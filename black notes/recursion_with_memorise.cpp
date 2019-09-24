#include <iostream>

using namespace std;

long long a[200]; 

long long f(int x){
	if(a[x] != -1) return a[x];
	a[x] = f(x-1) + f(x-2);
	return a[x];
}

int main(){

	int n;
	cin >> n;

	a[1] = 0;
	a[2] = 1;
	
	for(int i = 3; i <=n; ++i){
		a[i] = -1;
	}

	cout << f(n) << endl;
	
	return 0;
}