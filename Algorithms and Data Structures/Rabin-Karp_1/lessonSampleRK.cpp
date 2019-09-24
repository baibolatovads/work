#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
	
	int p = 31;
	int p_pow[1000001];
	int h[1000001];
	int hash_t = 0;
	//string s, t;
	void search(string s, string t){
		vector<int> v;
		
		int cnt = 0;
		int n = s.size(), m = t.size();
		
		p_pow[0] = 1;

		for(int i = 1; i < n; i++)
			p_pow[i] = p_pow[i - 1] * p;

		h[0] = s[0];

		for(int i = 1; i < n; i++)
			h[i] = h[i - 1] + s[i] * p_pow[i];
		
		hash_t = 0;
		for(int i = 0; i < m; i++){
			hash_t += t[i] * p_pow[i];
		}
		//cout << hash_t << endl;

		for(int i = 0; i + m <= n; i++){

			int j = i + m - 1;
			int hash = h[j];

			if(i > 0) hash -= h[i - 1];
			//cout << hash << " " << hash_t * p_pow[i] << endl;
			if(hash == hash_t * p_pow[i]){
				cnt++;
				v.push_back(i + 1);
			}
		}

		if(cnt > 0){
			cout << cnt << endl;
			for(int i = 0; i < v.size(); i++){
				cout << v[i] << " ";
			}
			cout << endl;
		}
		else cout << "Not Found" << endl;
	}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	
	int n;
	cin >> n;
	string s, t;

	for(int i = 0; i < n; i++){
	cin >> s >> t;
	search(s, t);	
	cout << endl;
	memset(p_pow, 0, 1000001);
	memset(h, 0, 1000001);
	hash_t = 0;
	
}
	return 0;
}