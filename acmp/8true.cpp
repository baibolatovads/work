#include <bits/stdc++.h>
using namespace std;

int main(){

	int a, b, c;
	cin >> a >> b >> c;
	string t = "", t1 = "";

	int d = a * b;

	while(d / 2 != 0){
		t += d % 2;
		d = d/2;
	}

	int r = c;

	while(r / 2 != 0){
		t1 += r % 2;
		r = r / 2;
	}

	if(t == t1) cout << "YES";
	else cout << "NO";

return 0;
}
