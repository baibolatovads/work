Выведите все натуральные делители числа x в порядке возрастания (включая 1 и само число).

Входные данные
Вводится натуральное число x

Выходные данные
Выведите все делители числа x
#include <iostream> 
#include <cmath> 

using namespace std; 
int main() {

int x, i;

cin >> x;

for (i = 1; i <=x; i++)
{
	if(x % i==0)
	cout << i << endl;
}

return 0;
}