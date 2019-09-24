/* Во входной строке записана последовательность чисел через пробел.
Для каждого числа выведите слово YES (в отдельной строке), если это 
число ранее встречалось в последовательности или NO, если не встречалось.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){

freopen ("input.txt", "r", stdin);
set <int> x;
int a;

while (cin >> a){
	if (x.find(a) != x.end()){
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	x.insert(a); //почему тут, а не в начале?
}

return 0;
}

