#include <bits/stdc++.h>

using namespace std;

int main(){

string s;
int t = 0;
getline (cin, s);

s.length()<=15;
for (int i = 0; i < s.length(); i++){
	if (s[i]=='.') t++;
	if (t == 3) true;
	else false;
}

if (true) cout << 1;
else cout << 0;
return 0;
}