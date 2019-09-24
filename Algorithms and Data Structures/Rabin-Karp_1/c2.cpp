#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef long long ll;
vector <int> prefix_function_of(string s){
	int n = (int)s.length();
	vector<int> pi(n);
	for(int i = 1; i < n; i++){
		int j = pi[i - 1];
		while(j > 0 && s[i] != s[j])
			j = pi[j - 1];
		if(s[i] == s[j])
			j++;
		pi[i] = j;
	}
	return pi;
}

int main(){

	int n;
	while(cin >> n){
		if(!n) break;
		string pat[n], s;
		for(int i = 0; i < n; i++)
			cin >> pat[i];
		cin >> s;
		map<string, int> cnt;
		int mx = 0;
		for(int i = 0; i < n; i++){
			string pattern = pat[i] + '#' + s;
			vector<int> pi = prefix_function_of(pattern);
			for(int j = pat[i].size() + 1; j < pattern.size(); j++)
				if(pi[j] == pat[i].size())
					cnt[pat[i]]++;
			mx = max(mx, cnt[pat[i]]);	
		}

			cout << mx << '\n';
			for(int i = 0; i < n; i++)
				if(cnt[pat[i]] == mx)
					cout << pat[i] << '\n';

	}


	return 0;
}