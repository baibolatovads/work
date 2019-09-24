#include <bits/stdc++.h>
using namespace std; 
int main() {

	int n, p1, p2, p3, p4;
	cin >> n;
	int A[n];
	for (int i = 0; i <= (n-1)/2; i++) {
    for (int j = i; j < n-i-1; j++) {
        int p1 = A[i][j];
        int p2 = A[j][n-i-1];
        int p3 = A[n-i-1][n-j-1];
        int p4 = A[n-j-1][i];
        
        A[j][n-i-1] = p1;
        A[n-i-1][n-j-1] = p2;
        A[n-j-1][i] = p3;
        A[i][j] = p4;
    }
}

return 0;
}