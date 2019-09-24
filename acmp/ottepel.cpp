#include <bits/stdc++.h>
using namespace std;
int main(){

freopen ("input.txt", "r", stdin);
freopen ("output.txt", "w", stdout);
int n;
cin >> n;
int a[n];
	
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

int maxcount = 0;
int count = 0;
	
	for (int i = 0; i < n; i++){
		count = 1;
		if (a[i] > 0){
			while (a[i + count] > 0){
				count++;
			}
			if (count > maxcount){
				maxcount = count;
			}
		}
	}cout << maxcount << endl;

return 0;
}