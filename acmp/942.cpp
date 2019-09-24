#include <bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin >> n;

	int a[n];
	int f = 0, t = 0, o = 0;
	

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
int sum1 = 0, sum2 = 0, sum3 = 0;
	for(int i = 0; i < n; i++){
		f += a[i];
		sum1 += f;
		//cout << f << endl;
	}
	
	//cout <<  sum << endl;

	for(int i = n - 1; i >= 0; i--){
		t += a[i];
		sum2 += t;
	}
	//cout << t << endl;
	
vector<int> v;

	for(int i = 0; i < n; i++){
		v.push_back(a[i]);
	}

sort(v.begin(), v.end());

	for(int i = 0; i < v.size(); i++){
		o = o + v[i];
		sum3 += o;
	}
	//cout << o << endl;
	
	int min = sum1;

	if(sum1 > sum2) min = sum2;
	if(min > sum3) min = sum3;

	if(min == sum3) cout << 1;
	else if(min == sum2) cout << 3;
	else if(min == sum1) cout << 5;

	return 0;
}