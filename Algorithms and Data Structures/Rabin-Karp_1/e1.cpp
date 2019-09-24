#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef long long ll;
vector <int> prefix_function_of(string s){
	int n = (int)s.length();
	vector<int> pref(n);
	for(int i = 1; i < n; i++){
		int j = pref[i - 1];
		while(j > 0 && s[i] != s[j])
			j = pref[j - 1];
		if(s[i] == s[j])
			j++;
		pref[i] = j;
	}
	return pref;
}

int main(){

	string s;
	while(cin >> s){
		if(s == ".") break;
		vector<int> pref = prefix_function_of(s);
		int n = (int)s.size();
		int k = n - pref[n - 1];
		if(n % k == 0)
			cout << n/k << "\n";
		else cout << n << "\n";
	}


	return 0;
}