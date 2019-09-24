#include <bits/stdc++.h>
using namespace std;

int f(long long n, long long b, long long c){
	if(n == 1) return b;
	else return f(n - 1, c - b, b);
}

int f1(long long n, long long b, long long c){
	if(n == 1) return c;
	else return f1(n - 1, c - b, b);
}

int main(){

	long long n, b, c;
	cin >> n >> b >> c;
	cout << f(n, b, c) <<" "<< f1(n, b, c);

return 0;
}
