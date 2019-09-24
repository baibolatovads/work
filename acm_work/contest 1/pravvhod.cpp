#include <iostream>
#include <vector>

using namespace std;
bool f(int *a ,int k, int x)
{
    int l = 0;
    int r = k-1;
 
    while(l <= r){
        int m = (l + r)/2;
        if(a[m] < x){
            l = m + 1;
        }
        else if(a[m] > x){
            r = m - 1;
        }
        else {
            return true;
        }
    }
    return false;
}

int main(){

int n,m;
cin >> n >> m;
int a[n], b[m];

for(int i = 0; i < n; i++){
	cin >> a[i];
}

for(int i = 0; i < m; i++){
	cin >> b[m];
}

	for(int i = 0; i < n; i++){
		//int k = a[i];
		for(int j = 0; j < m; j++){
		if (f(a, n, b[j])) {
			cout << i << endl;
		}
		//else cout << 0;
	}
	}

	return 0;
}