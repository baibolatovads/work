/*Вам дан словарь, состоящий из пар слов. Каждое слово является 
синонимом к парному ему слову. Все слова в словаре различны. Для одного 
данного слова определите его синоним.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	int n;
	cin >> n;
	map <string, string> m;
	string one;
	string two;

		for (int i = 0; i < n; i++){
			cin >> one >> two;
			m.insert(pair <string, string> (one, two));
		}

	string word;
	cin >> word;

map <string, string> :: iterator it;

	for (it = m.begin(); it != m.end(); it++){
		if (word == (*it).first) cout << (*it).second;
		else if (word == (*it).second) cout << (*it).first;
	}

return 0;
}