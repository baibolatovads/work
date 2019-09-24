#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,max1, max2;
	cin >> n;
	int a[n];

	for (int i =0 ; i<n; i++){
		cin >> a[n];
}	

	for (int i = 3; i<n; i++){
		max1= min(a[1], a[2]);
		max2 = max(a[1], a[2]);
		if (a[i]>max1){
			max2=max1;
			max1=a[i];
		}
		if (a[i]>max2 && a[i]<max1)
			max2=a[i];

} cout << max1 << " " << max2;

return 0;
}