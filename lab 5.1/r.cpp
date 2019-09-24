Входные данные
Вводятся 5 чисел: a, b, c, d и e.

Выходные данные
Найдите все целые решения уравнения ( ax3 + bx2 + cx + d ) / ( x - e ) = 0 на отрезке [0,1000] и выведите их количество.
 #include <iostream> 
#include <cmath> 

using namespace std; 
int main() {

  long long a, b, c, d, e;

  cin >> a >> b >> c >> d >> e ;
  int k = 0;
 
  for (int i = 0; i <= 1000; i++ )
    if (a*i*i*i + b*i*i + c*i + d == 0)
      if (i - e != 0)
        k++;
  cout << k ;

  return 0;
}