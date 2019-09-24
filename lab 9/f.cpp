#include <iostream>
#include <cmath>
using namespace std;

double power (double a, int n){
	if (n==0) return 1;
	if (n<0) return 1/power(a, abs (n));
	return a * power (a, n-1);
}

int main(){
	double k;
	int m;
	cin >> k >> m;
	cout << power (k, m);
	return 0;
} 