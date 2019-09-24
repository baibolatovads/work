#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main (){

	int n;
	cin >> n;
	int a;

	freopen("output.txt", "w", stdout);
	vector<int> v, s;

	for(int i = 0; i < n; i++){
		cin >> a;
		v.push_back(a);
		s.push_back(a);
	}
	reverse(s.begin(), s.end());

	for(int i = 0; i < v.size(); i++){
		if (v[i]==s[i]) cout<<"OK"<<endl;
		else cout<<"Here was"<<s[i]<<"INstead of"<<v[i] << endl;
}


return 0;
}