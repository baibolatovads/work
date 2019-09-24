#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	int n;
	vector <int> v;

			while (cin >> n){
				v.push_back(n);
			}

	int max = v[1];
	int min = v[1];

			for (int i = 1; i <= v.size(); i*2){
				if (max < v[i]) max = v[i];
			}cout << max << endl;

			for (int i = 1; i <= v.size(); i*2 + 1){
				if (min > v[i]) min = v[i];
			}cout << min << endl;
			cout << max + min;

return 0;
}