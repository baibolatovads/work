#include <iostream>

using namespace std;

int main(){
	
	int n, k, c = 0;
	cin >> n;
	int a[n];

			for (int i = 0; i < n; i++){
			cin >> a[i];
			}
cin >> k;

		for(int i = 0; i < n; i++){
				if (a[i] == k){
				c++;
		}
		}cout << c;

	return 0;
}