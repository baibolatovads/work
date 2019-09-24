#include <bits/stdc++.h>
using namespace std;
int main(){


	string word;
	int count;
	int max = -1;
	map <string, int> m;
	map <string, int>:: iterator it;
	set <string> ans;
	string winner;
	int n;
	cin >> n;
		for(int i = 0; i < n; i++){
		cin >> word;
		m[word]++;
	}



for(it=m.begin();it!=m.end();it++){
	if ((*it).second > max){
		max=(*it).second;
		winner=(*it).first;
	}
}cout << winner;

return 0;
}