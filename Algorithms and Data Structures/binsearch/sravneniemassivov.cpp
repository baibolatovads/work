/*В первой строке входных данных содержатся числа N и K (0NK100001). 
Во второй строке задаются N чисел первого массива, отсортированного по неубыванию,
а в третьей строке – K чисел второго массива. Каждое число в обоих массивах по модулю 
не превосходит 2109.
*/

#include <bits/stdc++.h>
using namespace std;
int a[100100];
int binsearch(int l, int r, int x){
	int mid = (l + r)/2;
	if (l > r) return r;
	if (x < a[mid]) return binsearch(l, mid - 1, x);
	else if (x > a[mid]) return binsearch(mid + 1, r, x);
	else return mid;
}
int main(){

	int n, k, x, ans, i;
	cin >> n >> k;
	//int a[n];

		for(int i = 0; i < n; i++){
				cin >> a[i];
		}

		while(k--){
			cin >> x;
			i = binsearch(0, n - 1, x);
			//cout << i << endl;
			ans = a[i];
			if (i < 0) ans = a[i + 1];
			else if (abs(x - a[i + 1]) < abs(x - a[i])) ans = a[i + 1];
			cout << ans << "\n";
		}
		

return 0;
}