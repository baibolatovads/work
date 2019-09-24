#include <iostream>

using namespace std;
 
int main(){
    int v, a, b, d, c, n;
    cin >> v;
  a = (v/ 1000);
  b = (v / 100 % 10);
  d = (v / 10 % 10);
  c = (v % 10);
  n = (a + b + d) - (b + d + c);
        
  cout << (n*n) + 1;
 
    return 0;
}
