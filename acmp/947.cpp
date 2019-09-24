#include <bits/stdc++.h>
using namespace std;
int main(){

	double n;
	cin >> n;
	double res = 0;
	int cnt = 0;
	for(double i = 2; i < 40000; i++){
		if(res >= n) break;
		res += 1/i;
		cnt += 1;
	} cout << cnt << " card(s)";
	return 0;
}