#include <iostream>
using namespace std;
int a[100100];
int binsearch(int l, int r, int x){
int mid = (l + r) /2;
if (l > r) return r;
if (x > a[mid]) return binsearch(mid + 1, r, x );
if (x < a[mid]) return binsearch(l, mid - 1, x);
return mid;
}
int main () {
	
int n, x, k;
cin >> n;
for (int i = 0; i < n; i++){
	cin >> a[i];
}
cin >> x;
int l = 0;
int r = n - 1;
for (int i = 0; i < n; i++){
int j = binsearch(l, r, x);
if (x == a[j])
k = 1;
else k = 0;
}
if (k == 1)
cout << "Yes";
else cout << "No";


	
return 0;
}