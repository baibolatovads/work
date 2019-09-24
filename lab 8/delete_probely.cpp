#include <bits/stdc++.h>

using namespace std;

int main(){

string s;
getline (cin, s);
int t = 0;

	for (int i = 0; i < s.length(); i++){
		if (s[i] == ' ') t++;
	}

		
		if (t > 1) s.erase(s.find(' '), t - 1);
		

		/*for (int i = 0; i < s.length(); i++){
			cout << s;
		}*/
		
	

	return 0;
}