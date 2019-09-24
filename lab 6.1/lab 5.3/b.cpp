Определите сумму всех элементов последовательности, завершающейся числом 0.

Числа, следующие за нулем, считывать не нужно.
#include <iostream>
using namespace std;
int main() {
 
int x, n=0;

	while (cin >> x){
		if (x==0) break;
		n = n+x;
	}
	cout << n << endl;

return 0;
}
