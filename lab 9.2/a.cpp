#include <iostream>
#include <cmath>
using namespace std;
//Определить можно ли с использованием только операций «прибавить 3» и «прибавить 5» получить из числа 1 число N
	bool can(int n){
  	if (n < 0) return false;
  else if (n == 0)
    return true;
  else
    return (can(n-3) || can(n-5));
}
int main()
{
  int n;
  cin >> n;
  if (can(n-1))
    cout << "YES";
  else 
    cout << "NO";
  return 0;
}