/* Дан список чисел, который может содержать до 100000 чисел. Определите, 
сколько в нем встречается различных чисел.
*/

#include <iostream>
#include <set>

using namespace std;

int main (){

set <int> s;
freopen ("input.txt", "r", stdin);
int d;
int k = 0;

while (cin >> d){
	s.insert (d);
}

set <int> :: iterator it;

for (it = s.begin(); it != s.end(); it++){
	if (s.find(*it) != s.end())
		k++;
}cout << k;


	return 0;
}
