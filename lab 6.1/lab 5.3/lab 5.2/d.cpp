#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	 int n;
  	cin>>n;


  int i = 0;
  while (n) {
    i += n % 2;
    n /= 2;
  }
  if (i == 1)
    cout<<"YES";
  else
    cout<<"NO";

	return 0;
}