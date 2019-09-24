#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;

	if(n%400 == 0 || (n%4 == 0 && n%100 != 0)){
		cout<< "12/09/";
	}else cout << "13/09/";

	if(n >= 1000) cout << n;
	else if(n >= 100 && n < 1000) cout << 0 << n;
	else if(n >= 10 && n < 100) cout << "00" << n;
	else cout << "000" << n;



	return 0;
}