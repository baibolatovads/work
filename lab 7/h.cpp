/*Даны два числа n и m. Создайте двумерный массив A[n][m], заполните его таблицей умножения
 A[i][j]=i*j и выведите на экран. При этом нельзя использовать вложенные циклы, все заполнение 
 массива должно производиться одним циклом.
Входные данные
Программа получает на вход два числа n и m – количество строк и столбцов, соответственно.

Выходные данные
Программа должна вывести  полученный массив. Числа разделяйте одним пробелом.*/

#include <iostream> 
#include <cmath> 

using namespace std; 
int main() {

int n, m, k;
cin >> n >> m;
int a[n][m];

	for (int i = 0; i<n; ++i){
		for (int j = 0; j < m; ++j){
				a[i][j] = i*j;
			
		}
	}

	for (int i = 0; i<n; ++i){
		for (int j = 0; j < m; ++j){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

return 0; 
}