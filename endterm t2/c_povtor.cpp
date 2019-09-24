/*Given a list of numbers. Erase all duplicates and number which is a power of 2. 
Print remaining numbers
in ascending order.
*/

#include <bits/stdc++.h>
using namespace std;

bool prime (int a){
	int t = 1;
	while (t < a){
		t = t * 2;
	}return a != t;
}

int main (){

	freopen ("input.txt", "r", stdin);
	int a; 
	set <int> x, y;

	while (cin >> a){
		x.insert(a);
	}

set <int> :: iterator it;

	for (it = x.begin(); it != x.end(); it++){
		if (prime (*it)){
			y.insert(*it);
		}
	}

	for (it = y.begin(); it != y.end(); it++){
		cout << *it << " ";
	}

return 0;
}