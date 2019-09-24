#include <bits/stdc++.h>
using namespace std;


vector<int> deliteli(int n){

vector<int> v;

	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			v.push_back(i);
		}
	}
	return v;
}

int is[1001];

int main(){

	int n;
	cin >> n;
	int a[n];
	vector<int> v;
	map<int, int> m;

		for(int i = 0; i < n; i++){
			cin >> a[i];
			v.push_back(a[i]);
			m[a[i]]++;
		}

sort(v.begin(), v.end());

int x = v[v.size() - 1];

	//cout << v[v.size() - 1] << " ";

	vector<int> p = deliteli(x);

	for(int i = 0; i < p.size(); i++){
		cout << p[i] << " ";
	}cout << endl;

set<int> ans;

map<int, int> :: iterator it;

bool l = false;

	for(it = m.begin(); it != m.end(); it++){
		int k = (*it).second;
		int t = (*it).first;
cout << "first: " << t << endl;
		if(k == 2) ans.insert(t);
		
			for(int i = 0; i < p.size(); i++){
				if(k == 1 && t != p[i]){
					ans.insert(t);
					
				}
			}
		
	}

		
		//cout << ans[ans.size() - 1];

	

set<int, int> :: iterator it1;

	for(it1 = ans.begin(); it1 != ans.end(); it1++){
		cout << *it1 << " ";
	}
	return 0;

}