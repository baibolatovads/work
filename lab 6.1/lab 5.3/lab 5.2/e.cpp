#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  int n;
  cin >> n;
 
  int i = 1, k = 0;
  while (i < n)
  {
    i <<=1;
    k++;
  }
  cout << k;

  return 0;
}