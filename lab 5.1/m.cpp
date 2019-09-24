Входные данные
Вводится число N, а затем N чисел.

Выходные данные
Подсчитайте и выведите, сколько среди данных N чисел нулей.
#include <iostream> 
#include <cmath> 

using namespace std; 
int main() {

 int n, x, k=0;
  cin >> n;
 
  for (int i = 1; i <= n; i++)
  {
    cin >> x;
    if (x==0)
    	k++;
    
  }
  cout << k ;
  
return 0;
}