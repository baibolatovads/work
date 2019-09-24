#include <bits/stdc++.h>
using namespace std;

int main (){

int n;
cin >> n;
vector <bool> prime (10000000+1, true);
vector <int> v;
prime[0] = prime[1] = false;

	for (int i = 2; i <= 10000000; ++i){
		if (prime[i]){
			v.push_back(i);
			if(i * 1ll * i <= 10000000)
				for (int j = i*i; j <= 10000000; j+=i){
					prime[j] = false;
				}
		}
	}

	for (int i = 0; i < n; i++){
		cout << v[i] << " ";
	}



return 0;
}