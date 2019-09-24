Найдите самый маленький натуральный делитель числа x, отличный от 1 (2 <= x <= 30000).

Входные данные
Вводится натуральное число x.

Выходные данные
Выведите наименьший делитель числа x, отличный от 1.
#include <iostream> 
#include <cmath> 

using namespace std; 
int main() {

int x, i;

cin >> x;

for (i = 2; i <=x; i++)
{
	if(x % i==0)
		{
			cout << i;
			return 0;
		}else 
		{
			continue;
		}

}
return 0;
}