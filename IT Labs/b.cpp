#include <bits/stdc++.h>
using namespace std;

int divider(int a, int b){
	int max;
	for(int i = b; i > 0; i--){
		if(i % a == 0){
			return i;
		}
	}
}

int main(){

	int a, b;
	cin >> a >> b;

	cout << divider(a, b);
	return 0;
}