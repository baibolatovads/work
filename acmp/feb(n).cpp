#include <bits/stdc++.h>
using namespace std;
int feb(int n){
	if (n < 0) cout << "Error!";
	if (n > 1) return feb(n - 1) + feb (n - 2);
	return n;
}
int main(){
	int n;
	cin >> n;
	cout << feb(n);
	return 0;
}