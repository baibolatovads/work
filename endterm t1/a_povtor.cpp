/*Given a list of numbers. 
Find unique numbers which is a power of 2. Print them in ascending order
*/

#include <bits/stdc++.h>
using namespace std;

bool res(int d){
	int t = 1;
	while (t < d){
		t = t * 2;
	}return d == t;
}

int main(){

	freopen ("input.txt", "r", stdin);
	int a;
	set <int> x;

	while (cin >> a){
		if (res(a)){
		x.insert(a);
	}
}

set <int> :: iterator it;
	
	for (it = x.begin(); it != x.end(); it++){
			cout << *it << " ";
	}
return 0;
}