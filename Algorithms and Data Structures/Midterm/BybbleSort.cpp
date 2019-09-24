#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

	int n, l = 1, ans = 1, temp;
	cin >> n;
	int a[n];
	set<int> s;

		for(int i = 0; i < n; i++){
			cin >> a[i];
			s.insert(a[i]);
		}

		for(int i=0; i<(n-1); i++){
		for(int j=0; j<(n-i-1); j++){
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

		for(int i = 0; i < n; i++){
			if (a[i] == a[i + 1]) l++;
			else{
				ans = max(l, ans);
				l = 1;
			}
		}cout << ans << " " << s.size();





	return 0;
}
