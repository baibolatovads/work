#include <bits/stdc++.h>
using namespace std;
string s;

int main(){

	
	cin >> s;
	vector<int> num;
	int n = s.size();

	for(int i = 0; i < s.size(); i++){
		char ch = s[i];
		if(ch >= 48 && ch <= 57){
			int numb = ch - '0';
			num.push_back(numb);
		}
	}

	sort(num.begin(), num.end());

cout << num[0];

	for(int i = 1; i < num.size(); i++){
		cout << "+" << num[i];
	}

	return 0;
}