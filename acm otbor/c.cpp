#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin >> n;
vector<int> v;

	for (int i = 1; i <= n; i++){
		if (n % i == 0) {
			v.push_back(i);
		}
	}

vector<int> :: iterator it;
	
	for (it = v.begin(); it != v.end(); it++){
		cout << *it << " ";
	}

return 0;
}