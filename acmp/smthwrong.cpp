#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	int n;
	cin >> n;
	int v, s, vmax = 0;

		for (int i = 0; i < n; i++){
			cin >> v >> s;

			if (s == 1){
				if (vmax > v){
					vmax = v;
				}
			}
		}cout << vmax;

return 0;
}