#include <bits/stdc++.h>
using namespace std;

bool isPrime (int x){
	bool res = true;
	if (x == 1) res = false;
		for (int i = 2; i <= sqrt(x); i++){
			if (x % i == 0){
				res = false;
				break;
			}
		}return res;
}

int main(){

	int a, b;
	cin >> a >> b;

		for (int i = a; i <= b; i++){
			if (isPrime(i))
				cout << i << " ";
		}
return 0;
}