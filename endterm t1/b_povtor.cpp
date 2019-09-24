//Print all prime numbers between A and B in descending order

#include <bits/stdc++.h>
using namespace std;

bool prime (int o){
	bool res = true;
	if (o == 1) res = false;
	for (int i = 2; i <= sqrt(o); i++){
		if (o % i == 0){
			res = false;
			break;
		}
	}return res;
}

int main(){

	int a, b;
	cin >> a >> b;

	for (int i = b; i >= a; i--){
		if (prime(i))
			cout << i << " ";
	}
return 0;
}