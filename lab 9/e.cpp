#include <iostream>
#include <cmath>
using namespace std;

bool f (int n){
	if (n==1) return false;
	bool res = true;
	int k = sqrt (n);

	for (int i = 2; i <= k; ++i){
		if (n%i==0){
			res=false;
			break;
		}
	}
return res;
}

int main (){
	int n;
	cin >> n;
	if (f(n)) cout << "prime" << endl;
	else cout << "composite" << endl;
return 0;
}