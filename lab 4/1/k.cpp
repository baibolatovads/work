Вычислите сумму данных N натуральных чисел.

Входные данные
Вводится число N, а затем N чисел, сумму которых необходимо вычислить.

Выходные данные
Выведите единственное число - сумму введенных чисел.
#include <iostream> 
#include <cmath> 

using namespace std; 
int main() {

	

	int n, i;
	cin >> n;
	int k =0;
do{
	cin >> i;
}
while (i<=n){
	if(n % i==0) ;
		k = k+i; 
} cout << k << endl; 

return 0;
}