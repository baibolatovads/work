#include <bits/stdc++.h>
using namespace std;
int main(){

	freopen ("input.txt", "r", stdin);
	string word, best, last;
	map <string, int> m;

	while (cin >> word){
		m[word]++;

		if (word.size() > best.size()){
			best = word;
		}
		if (word.size() < last.size() || last.size() == 0){
			last = word;
		}
	}
cout << m[best] << endl << m[last];

return 0;
}