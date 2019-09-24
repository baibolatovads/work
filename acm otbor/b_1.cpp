#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen("input.txt", "r", stdin);

	char letter;
	map<char, int> m;
	map<char, int> :: iterator it;
	while(cin >> letter){
	if(letter == '.' || letter == '!' || letter == '?'){
		for(it = m.begin(); it != m.end(); it++){
			if((*it).first != ' ' || (*it).first != '!' || (*it).first != '?' || (*it).first != '.' || (*it).first != ','){
			cout << (*it).first << ':' << (*it).second << endl;

		}
		map<char, int> m;
	map<char, int> :: iterator it;
		}
	}
		m[letter]++;
	}

	return 0;
}