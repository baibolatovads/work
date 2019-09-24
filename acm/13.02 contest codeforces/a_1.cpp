#include <bits/stdc++.h>
using namespace std;

bool isin[1001];

int main(){

	int n;
	cin >> n;
	int a[n];
	vector<int> ans;

		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

		for(int i = n - 1; i >= 0; i--){
			if(!isin[a[i]]){
				ans.push_back(a[i]);
				isin[a[i]] = true;
			}
		}

		cout << ans.size() << endl;
		for(int i = ans.size() - 1; i >= 0; i--){
			cout << ans[i] << " ";
		}


return 0;
}