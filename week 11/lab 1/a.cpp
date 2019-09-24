#include <iostream>
#include <cmath>
using namespace std;

void square(int a, int b, int *c){
	for(int i=a;i<=b;i++){
    	cout << i*i << " " ;
    }
}

int main(){
	int a, b;
	cin >> a >> b;
	int c[abs(b)+abs(a)];
	

	square(a, b, c);
	return 0;
}