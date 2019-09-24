#include <iostream>
using namespace std;
int main() {
	
  bool ok=false;
    int n, x, pr, nx, c=1000000, mn=1000000;
    cin>>pr>>x;
    while(cin>>nx && nx!=0)
    {
        if(x>pr && x>nx){ok=1;mn=min(mn, c);c=0;}
        c++;
        pr=x;
        x=nx;
    }
    if(!ok || mn==1000000)cout<<0;
    else cout<<mn;
return 0;
}
