/*Given a list of numbers. Print all not prime numbers which is appeared 
in the list more than once in
ascending order.
*/

#include <bits/stdc++.h>
using namespace std;

bool prime (int a){
	bool res = true;
	if (a == 1) res = false;
	for (int i = 2; i <= sqrt(a); i++){
		if (a % i == 0) res = false;
	}return res;
}

int main(){

	freopen ("input.txt", "r", stdin);
	int x;
	map <int, int> m;

	while (cin >> x){
		m[x]++;
	}

map <int, int> :: iterator it;

	for (it = m.begin(); it != m.end(); it++){
		int k = (*it).first;
		int l = (*it).second;
		if (!prime(k) && l > 1){
			cout << k << " ";
		}
	}

return 0;
}