/* Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
Посчитайте, сколько чисел содержится одновременно как в первом списке, 
так и во втором.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){

freopen ("input.txt", "r", stdin);
set <int> x, y;
int a, b;
set <int> ans;

	string line;
	getline (cin, line);
	stringstream ss1;
	ss1 << line;
	while (ss1 >> a){
		x.insert(a);
	}

	getline (cin, line);
	stringstream ss2;
	ss2 << line;
	while (ss2 >> b){
		y.insert(b);
	}

set <int> :: iterator it;

	for (it = x.begin(); it != x.end(); it++){
		int k = *it;
		if (y.find(k) != y.end())
			ans.insert(k);
	}

	for (it = y.begin(); it != y.end(); it++){
		int k = *it;
		if(x.find(k) != x.end())
			ans.insert(k);
	}cout << ans.size();

return 0;
}