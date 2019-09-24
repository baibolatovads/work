#include <bits/stdc++.h>

using namespace std;

int main(){

string s;
cin >> s;
char j = 'f';
int k = 0;
int begin, end;
int index;


	for (int i = 0; i < s.size(); i++){
		if (s[i] == j) k++;
	}	
	

	
	//begin = s.find(j);
	end = s.find_last_of(j);

	if (k == 1) cout << -1;
	else if (k >= 2) cout << s.find('f', s.find('f') + 1);
	else if (k == 0) cout << -2;

return 0;
}