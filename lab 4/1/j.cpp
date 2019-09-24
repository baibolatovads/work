Вычислите сумму данных 100 натуральных чисел.

Входные данные
Вводятся 100 чисел, сумму которых необходимо посчитать.

Выходные данные
Программа должна вывести единственное число - полученную сумму.
#include <iostream> 
#include <cmath> 

using namespace std; 
int main() {

freopen("input.txt","r",stdin);
	
	int x,s = 0;

	for(int i = 1; i <= 100; ++i){
		cin >> x;
		s = s + x;
	}

	cout << s;

	return 0;	
}