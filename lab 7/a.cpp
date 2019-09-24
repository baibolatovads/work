/*Дано число n, n  100 . Создайте массив n×n и заполните его по следующему правилу:
- числа на диагонали, идущей из правого верхнего в левый нижний угол, равны 1; 
- числа, стоящие выше этой диагонали, равны 0;
- числа, стоящие ниже этой диагонали, равны 2.*/

#include <iostream> 
#include <cmath> 

using namespace std; 
int main() {

int n;
cin >> n;
int a[n][n];

	for (int i = 0; i<n; ++i){
		for (int j = 0; j < n; ++j){
			if (j == n - i -1){
				a[i][j] = 1;
			}else if(i+j>=n){
				a[i][j] = 2;
			}else{
				a[i][j] = 0;
			}
		}
	}

	for (int i = 0; i<n; ++i){
		for (int j = 0; j < n; ++j){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

return 0; 
}