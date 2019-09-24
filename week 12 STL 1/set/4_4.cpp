/* Напишите программу, которая для двух последовательностей, состоящих 
из натуральных чисел, не превосходящих n, будет определять, какие числа 
встречаются в каждой из последовательностей, а какие из чисел от 1 до n — 
ни в одной из них.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){

freopen ("input.txt", "r", stdin);
int n, a, b;
cin >> n >> ws;

set <int> x, y, ans, ans1;
string line;
getline (cin, line);
stringstream ss;
ss << line;
	while (ss >> a){
		x.insert(a);
	}

getline (cin , line);
stringstream ss1;
ss1 << line;
	while (ss1 >> b){
		y.insert(b);
	}

set <int> :: iterator it;

	for (it = x.begin(); it != x.end(); it++){
		int k = *it;
		if (y.find(k) != y.end() && k <= n)	{
			ans.insert(k);
		}
	}

	for (it = y.begin(); it != y.end(); it++){
		int k = *it;
		if (x.find(k) != x.end() && k <= n) {
			ans.insert(k);
		}
	}

	for (it = ans.begin(); it != ans.end(); it++){
		cout << *it << " ";
	}cout << endl;

	for (int i = 1 ; i <= n; i++){
		if(x.find(i) == x.end() && y.find(i) == y.end())
			ans1.insert(i);
	}

	for (it = ans1.begin(); it != ans1.end(); it++){
		cout << *it << " ";
	}
	
return 0;
}


