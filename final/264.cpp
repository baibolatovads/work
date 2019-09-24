#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n, k, r;
	cin >> n;
	int a[n];
	int maxcount = -1;
	int count = 0;

			for (int i = 0; i < n; i++){
				cin >> a[i];
			}

			for (int i = 0; i < n; i++){
				count = 1;
				if (a[i] > 0){
					while (a[i + count] > 0){
						count++;
						r = 1;
					}
					if (count > maxcount){
						maxcount = count;
					}
				}
				else {
					k = 1;
			}
		} if (r == 1) cout << maxcount << endl;
		  else if (k == 1) cout << 0;
			

return 0;
}