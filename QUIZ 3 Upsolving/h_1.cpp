#include <bits/stdc++.h>
using namespace std;
int main(){

//freopen ("input.txt", "r", stdin);
int n;
cin >> n;
string line, best;
	
	for (int i = 0; i < n; i++){
		cin >> line;
		if (best.size() < line.size())
			best = line;
	}

char d;
cin >> d;

	if (line.size() == 1) cout << d;
	else if (best[0] == d) cout << best;
		

return 0;
}