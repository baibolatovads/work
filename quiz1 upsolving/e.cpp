#include <bits/stdc++.h>
using namespace std;
int main(){

	int n, a, b, s = 0;
	cin >> n;

	a = n/1000;
	b = n%10;
	s = a + b;
	cout << s;


return 0;
}