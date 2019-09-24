#include <iostream>
#include <vector>

using namespace std;

void pwrStrings(string s){	
	int n = s.size();
	vector<int> p(n);
	p[0] = 0;

	for(int i = 1;i<n;++i){

		int k = p[i-1];

		while(k>0 && s[i]!=s[k]){
			k = p[k-1];
		}
		
		if(s[i] == s[k]){
			k = k+1;
		}
		p[i] = k;
		
	}

	int distinctL = s.substr(0, n - p[n-1]).size();

	if(distinctL==n){
		cout << 1 << endl;
	}else{
		cout << n/distinctL << endl;
	}
}

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	string s;
	//cin >> s;
	while(cin >> s){
		if(s == ".") break;
		pwrStrings(s);
	}
	

	return 0;
}