#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	 int n, i = 2, f1 = 0, f2 = 1, murmur;
  cin >> n;
 
  while (i <= n)
  {
    murmur = f1 + f2;
    f1 = f2;
    f2 = murmur;
    i++;
  }
  if (n<=1)
    cout<<n;
  else
    cout << murmur;

return 0;
}

