Входные данные
Вводятся 4 числа: a, b, c и d. 

Выходные данные
Выведите все числа на отрезке от a до b, дающие остаток c при делении на d. 
Если таких чисел не существует, то ничего выводить не нужно.
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
	if (a[i] % 2 == 0)
	 cout << a[i] << " ";
}

return 0;
}