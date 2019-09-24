#include <bits/stdc++.h>
using namespace std;

char small (char a){
	if (a >= 'A' && a <= 'Z') return (a + 32);
	return a;
}

int main(){

freopen ("input.txt", "r", stdin);
string word;
map <char, int> m;

	while (cin >> word){
		char c = small (word[0]);
		m[c]++;
	}


	for (int i = 0; i < 26; i++){
		cout << m[char(i + 'a')] << endl;
	}

return 0;
}