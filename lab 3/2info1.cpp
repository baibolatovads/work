#include <iostream>
#include <cmath>
using namespace std;

int main (){

int a, b, c, n;

cin >> n;

a = (n%4 == 0);
b = (n%100 != 0);
c = (n%400 == 0);

if((a&&b)||c){
	cout << "YES";
}else{
	cout << "NO";
}
return 0;
}