#include <bits/stdc++.h>
using namespace std;

bool prime (int o){
	bool res = true;
	if (o == 1) res = false;
	for (int i = 2; i <= sqrt(o); i++){
		if (o % i == 0){
			res = false;
			break;
		}
	}return res;
}

int main(){

	freopen ("input.txt", "r", stdin);
	int a;
	
		while (cin >> a){
			if (prime(a))
				cout << a << " ";
		}

return 0;
}
		