#include <iostream> 
using namespace std;

int a[100100], b[100100];

int bSearch(int x, int l, int r){
	int mid = (l + r)/2;
	if(l > r) return r;
	if(x < a[mid]) return bSearch(x, l, mid - 1);
	else if(x > a[mid]) return bSearch(x, mid + 1, r);
	else return mid;
}

int main(){
	
	int n, k;
	cin >> n >> k;

		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

		for(int i = 0; i < k; i++){
			cin >> b[i];
		}

sort(a, a + n);

		for(int i = 0; i < k; i++){
			int j = bSearch(b[i], a, a + n);
			if(b[i] == b[j]) cout << j << "\n";
			e
		}
	return 0;
}