#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int f(int n, int a, int b, int c){
	if (n == 1) return 0;
	else{
	if (a > b) return a;
	else return b;
	if (b < c) return b;
	else return c;
}
}
int main(){

	int n, a, b, c, k = 0;
	cin >> n >> a >> b >> c;
	while(n){
	k += f(n, a, b, c);
}
	return 0;
}