#include <bits/stdc++.h>
#include <cmath>
using namespace std;

string smax(string x, string y){
	int m = x.size(), n = y.size();
	if (m > n) return x;
	if (m < n) return y;
	return max(x, y);
}
int main(){

string a, b, c;
cin >> a >> b >> c;
cout << smax(a, smax(b, c));

return 0;
}