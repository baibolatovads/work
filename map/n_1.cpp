/*Дан текст (строк может быть много). Выведите слово, которое в этом 
тексте встречается чаще всего. Если таких слов несколько, выведите то, 
которое меньше в лексикографическом порядке.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	string word;
	int count;
	int max = -1;
	map <string, int> m;
	map <string, int>:: iterator it;
	set <string> ans;
	string winner;

	while (cin >> word){
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