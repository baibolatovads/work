#include <iostream>
#include <cmath>
using namespace std;

int main (){

double x, y;

cin >> x >> y;

if(x>y){
	cout << "1";
}else if(x<y){
	cout << "2";
}else{
	cout << "0";
}

return 0;
}