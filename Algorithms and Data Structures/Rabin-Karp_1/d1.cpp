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

	int T;
	cin >> T;

	for(int j = 0; j < T; j++){
		string s, t;
		cin >> s >> t;
		string pattern = t + '#' + s;
		vector<int> pi = prefix_function_of(pattern);
		vector<int> ans;

		for(int i = t.size() + 1; i < pi.size(); i++)
			if(pi[i] == t.size())
				ans.push_back(i - 2 * t.size() + 1);
		if(ans.empty()) cout << "Not Found\n";
		else 
			cout << ans.size() << endl;	
			for(int i = 0; i < ans.size(); i++)
				cout << ans[i] << ' ';
		
	}



	return 0;
}