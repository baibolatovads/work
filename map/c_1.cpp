/*Даны два списка чисел, которые могут содержать до 10000 чисел каждый.
 Выведите все числа, которые входят как в первый, так и во второй список 
 в порядке возрастания.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){

freopen ("input.txt", "r", stdin);
set <int> x, y, ans;
int a, b;

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
		if (x.find(k) != x.end())
			ans.insert(k);
	}

	for (it = ans.begin(); it != ans.end(); it++){
		cout << *it << " ";
	}

return 0;
}