#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int a, b, c;
	cin >> a >> b >> c;
	int max = a;
	int min = a;

	if(a < b) max = b;
	if(max < c) max = c;

	if(a > b) min = b;
	if(min > c) min = c;

	cout << max - min;

	return 0;
}