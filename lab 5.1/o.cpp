Проверьте, есть ли среди данных N чисел нули.

Входные данные
Вводится число N, а затем N чисел.

Выходные данные
Выведите YES, если среди введенных чисел есть хотя бы один нуль, или NO в противном случае.
#include <iostream> 
#include <cmath> 

using namespace std; 
int main() {

  int x, n;
  cin >> n;
  bool zeroExist = false;
 
  for (int i = 1; i <= n ; i++)
  {
    cin >> x;
    if (x == 0)
    {
      zeroExist = true;
      break;
    }
  }
  if (zeroExist)
    cout<<"YES";
  else
    cout << "NO";
  
return 0;
}