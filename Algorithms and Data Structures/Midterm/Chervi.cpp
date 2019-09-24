#include <iostream>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;
int a[100100];

int main(){

	int n, k, x, index, i, ans, sum = 0;
	cin >> n;
	int a[n];
			

		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

		for(int i = 0; i < n; i++){
			sum += a[i];
			a[i] = sum;
		}

	cin >> k;
	int b[k];

		for(int i = 0; i < k; i++){
			cin >> b[i];
		}
		
		for(int i = 0; i < k; i++){
			int l = 0, r = n - 1;
			while(l < r){
				int m = (l + r)/2;
				if (b[i] > a[m]){
					l = m + 1;
				}else {
					r = m;
				}
			}
			cout << r + 1 << endl;
		}
	
	

	return 0;
}