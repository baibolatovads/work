/* Задано натуральное число n. Необходимо перевести его в k-ичную систему счисления 
и найти разность между произведением и суммой его цифр в этой системе счисления.
Например, пусть n = 239, k = 8. Тогда представление числа n в восьмеричной системе 
счисления — 357, а ответ на задачу равен 3 × 5 × 7 − (3 + 5 + 7) = 90.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){

int n, k, sum = 0, product = 1;
cin >> n >> k;

	while (n > 0){
		sum = sum + n%k;
		product = product * (n%k);
		n = n/k;
	}cout << (product - sum);

return 0;
}