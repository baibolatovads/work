Программа получает на вход последовательность целых неотрицательных чисел, каждое число записано в отдельной строке. Последовательность завершается числом 0, при считывании которого программа должна закончить свою работу и вывести количество членов последовательности (не считая завершающего числа 0).

Числа, следующие за числом 0, считывать не нужно.
#include <iostream>
using namespace std;
int main() {
 
int x, n=0;

	while (cin >> x){
		if (x==0) break;
		n++;
	}
	cout << n << endl;

return 0;
}
