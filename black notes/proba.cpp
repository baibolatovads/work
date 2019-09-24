#include <bits/stdc++.h>
using namespace std;

/*bool (int a){
	int k = 0;
	for (int i = 2; i <= a; i++){
		if (a%i == 0) k++;
	}
		if (k > 2) return false
}*/
int main(){

	vector <int> v;
	int a;
	cin >> a;

		for (int i = 2; i < a; i++){
			v.push_back(a);
		}

		for (int i = 0; i < a; i++){
			cout << v[i] << " ";
		}

	return 0;
}