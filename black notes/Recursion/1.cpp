#include <iostream>
using namespace std;

long long f(int n){
	if(n == 0) return 1;
	return 2*f(n - 1);
}
int main(){
	int n;
	cin >> n;
	cout << f(n);

	return 0;
}