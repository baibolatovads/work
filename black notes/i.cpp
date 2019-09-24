#include <iostream> 
#include <cmath> 

using namespace std; 
int main() {

int n, m = 0, b = 0;
cin >> n;
int a[n][n];

	for (int i = 0; i<n; ++i){
		for (int j = 0; j < n; ++j){
			cin >> a[i][j];
		}
	}

	for (int i = 0; i<n; ++i){
		for (int j = 0; j < n; ++j){
			if (i==j)
				m = m+a[i][j];
			if (i+j==n-1)
				b = b + a[i][j];
		}
	}cout << m << " " << b;

return 0;
}
