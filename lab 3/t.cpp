#include <iostream>
#include <cmath>
using namespace std;

int main (){
int a, b, c;

cin >> a >> b >> c;

if (((b+c)>a)&&((a+c)>b)&&((a+b)>c)){
	cout << "YES";
}else{
	cout <<"NO";
}
return 0;
}