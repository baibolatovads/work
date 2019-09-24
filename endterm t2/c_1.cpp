/*Given text. Find how many words started by letters: ’a’, ’b’, ’c’ ... ’z’. 
Note: ’a’ and ’A’ must be considered
as same letters
*/

#include <bits/stdc++.h>
using namespace std;

char tolower(char a){
	if (a >= 'A' && a <= 'Z') return char(a+32);
	return a;
}

int main(){

freopen ("input.txt", "r", stdin);

	map <char, int> m;
	string word;

	while (cin >> word){
		char c = tolower(word[0]);
		m[c]++;
	}


	for (int i = 0; i < 26; i++){
		cout << m[char(i + 'a')] << endl;
	}



return 0;
}