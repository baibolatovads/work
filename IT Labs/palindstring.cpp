#include <bits/stdc++.h>
using namespace std;

bool check(string a){
	int n = a.size();
	for(int i = 0; i < n/2; i++){
		if(a[i] != a[n - i - 1]) return false;
	}
	return true;
}

int main(){

	string a;
	cin >> a;

	if(check(a)) cout << "Palindrome";
	else cout << "Not palindrome";

return 0;
}
