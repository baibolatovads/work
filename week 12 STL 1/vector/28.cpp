#include <bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin >> n;
	vector <int> v;

		for (int i = n - 1; i > 0; i--){
			if (n % i == 0){
				v.push_back(i);
			}
		}

int d = 0;

		for (int i = 0; i < v.size(); i++){
			d = d + v[i];
		}
		

		if (d == n) cout << "YES";
		else cout << "NO";

	return 0;
}