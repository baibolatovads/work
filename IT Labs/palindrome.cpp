#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> v, int n){
	//int n = v.size();
	for(int i = 0; i < n/2; i++){
		if(v[i] != v[n - i - 1]) return false;
	}
	return true;
}


int main(){

	int n;
	cin >> n;
	int a;
	vector<int> v;

	for(int i = 0; i < n; i++){
		cin >> a;
		v.push_back(a);
	}

	if(check(v, n) == true) cout << "Palindrome";
	else cout << "Not <p></p>alindrome";

return 0;
}
