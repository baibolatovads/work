#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> pows;

void pows_of_string(){
	pows.push_back(1);
	for(int i = 1; i < 1e5; i++)
		pows.push_back(pows[i - 1] * 31);
}

int res(string s, int n, int k){
	vector<ll> res(n);
	set<ll> st;
	for(int i = 0; i < n; i++){
		res[i] = (s[i] - 'a' + 1) * pows[i];
		if(i > 0) res[i] += res[i - 1];
	}

	for(int i = 0; i <= n - k; i++){
		ll h;
		if(i == 0) h = res[k - 1];
		else h = res[i + k - 1] - res[i - 1];
		st.insert(h*pows[n - i - 1]);
	}
	return (int)st.size();
}


int main(){
	
	pows_of_string();
	int T;
	cin >> T;

	for(int i = 0; i < T; i++){
		int n, k;
		string s;
		cin >> n >> k >> s;
		cout << res(s, n, k) << endl;
	}


	return 0;
}	