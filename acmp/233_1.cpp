#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	int a[n];
	vector <int> v;
	int index;
	int k = 0;

		for (int i = 0; i < n; i++){
			cin >> a[i];
			v.push_back(a[i]);
		}

		for (int i = 1; i <= v.size(); i++){
			if (v[i] <= 437){
				index = i;
				break;
			}
			if (v[i] > 437) {
				k++;
			} 
		}

		if (k == n) cout << "No crash";
		else if (k < n) cout << "Crash " << index;

return 0;
}
