#include <bits/stdc++.h>
using namespace std;

int main (){

	string s, best;
	int d = 0;

	while (cin >> s){
		if (best.size() < s.size())
			best = s;
	}

	for (int i = 0; i < best.size(); i++){
		if (best[i] >= 0 && best[i] <= 9) d++;
	}cout << d;

return 0;
}