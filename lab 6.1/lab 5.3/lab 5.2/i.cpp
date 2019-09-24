#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	 int n, i = 1, f1 = 0, f2 = 1, murmur=1;
  cin >> n;
 
  while (murmur < n)
  {
    murmur = f1 + f2;
    f1 = f2; 
    f2 = murmur;
    i++;
  }
  if (murmur==n)
    cout<< i;
  else
    cout << -1;

return 0;
}

