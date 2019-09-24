Входные данные
Вводятся целые числа a и b. Гарантируется, что a не превосходит b

Выходные данные
Выведите (через пробел) все четные числа от a до b (включительно).
#include <iostream> 
 

using namespace std; 
int main() {


int n;
cin >> n;
int a[n];

for (int i=0; i < n; ++i){
	cin >>  a[i] ;
}

for (int i = 0; i < n; ++i){
	if (i % 2 == 0)
	 cout << a[i] << " ";
}

return 0;
}