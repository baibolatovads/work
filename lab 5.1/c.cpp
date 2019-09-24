Входные данные
Вводятся целые числа a и b. Гарантируется, что a не превосходит b.

Выходные данные
Выведите все числа на отрезке от a до b, являющиеся полными квадратами. Если таких чисел нет, то ничего выводить не нужно.
#include <iostream> 
using namespace std; 
int main() {


int n;
cin >> n;
int a[n];


for (int i=0; i < n; ++i){
	cin >>  a[i] ;
}
int k = 0;
for (int i = 0; i < n ; ++i){
	if (a[i+1]>a[i]) k=k+1;
}
    cout << k << endl;
return 0;
}