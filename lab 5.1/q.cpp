Входные данные
Вводятся 4 числа: a, b, c и d.

Выходные данные
Найдите все целые решения уравнения ax3 + bx2 + cx + d = 0 на отрезке [0,1000] и выведите их в порядке убывания. Если на данном отрезке нет ни одного решения, то ничего выводить не нужно.
#include <iostream> 
#include <cmath> 

using namespace std; 
int main() {

	long long a, b, c, d;

cin >> a >> b >> c >> d;

for (int i = 1000; i>=0; i--){
	if (a*i*i*i + b*i*i + c*i + d == 0)
		cout << i << endl;
}

return 0;
}