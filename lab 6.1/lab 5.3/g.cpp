#include <iostream>
using namespace std;
int main() {
 
  int x;
  cin >> x;
  int max1 = x, max2 = -1;
  while (x)
  {
    cin >> x;
    if (x > max1)
    {
      max2 = max1;
      max1 = x;
    }
    else if ( x > max2 )
      max2 = x;
  }
  cout << max2;
  
return 0;
}
