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
	freopen ("output.txt", "w", stdout);
	int a;
	cin >> a;
	if (res (a)) cout << "YES";
	else cout << "NO";

return 0;
}