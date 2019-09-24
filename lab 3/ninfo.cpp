#include <iostream>
#include <cmath>
using namespace std;

int main (){
int a, b, x;
cin >> a >> b;

x = (b/a)*(-1);

if((a==0)&&(b==0)){
	cout<< "INF";
}else if ((a==0)&&(b!=0)){
	cout << "NO";
}else if ((a!=0)&&(b%a!=0)){
	cout << "NO";
}else if ((a!=0)&&(b%a==0)){
	cout << x;
}

return 0;
}
