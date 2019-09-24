#include <bits/stdc++.h>
using namespace std;
int main(){

set <int> a, b;
set <int>::iterator it;
vector <int> ans;

	int n, m, x, k = 0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		a.insert(x);
	}

	cin>>m;
	for(int i=0; i<m; i++){
		cin>>x;
		b.insert(x);
	}

	for(it=a.begin(); it!=a.end(); it++){
		if(b.find(*it)==b.end()){
			k++;
			ans.push_back(*it);
		}
	}

	for(it=b.begin(); it!=b.end(); it++){
		if(a.find(*it)==a.end()){
			k++;
			ans.push_back(*it);
		}
	}cout << k << endl;

	for (int i = 0; i < ans.size(); i++){
		cout << ans[i] << " ";
	}
return 0;

}