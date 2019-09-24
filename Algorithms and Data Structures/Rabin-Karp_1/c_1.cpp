#include <bits/stdc++.h>
using namespace std;

	int KMP(string g, string f){
		int k = 0, l = 0, cnt = 0;
		int n = g.size(), m = f.size();
		while(k != n){
		if(g[k] == f[l]){
			k++;
			l++;
			if(l == m){
				cnt++;
				if(k % 2 == 0) k--;
				else k -= 2;
				l = 0;
			}
		}
		else if(l == 0) {
			k++;
		}
		else l = f[l - 1];
	} 
		return cnt;
	}

int main(){

	//freopen("input.txt", "r", stdin);
	int n, best = 0;
	string g, f, winner;

		while(cin >> n && n != 0){
			vector<string> v;
			for(int i = 0; i < n; i++){
				cin >> f;
				v.push_back(f);
			}
			cin >> g;
			for(int i = 0; i < v.size(); i++){
				int k = KMP(g, v[i]);
				if(k > best) best = k;
				winner = v[i];
			}
			for(int i = 0; i < v.size(); i++){
				int k = KMP(g, v[i]);
				if(k == best) cout << k << endl << v[i] << endl;
			}
		}


	return 0;
}