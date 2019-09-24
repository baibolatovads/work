#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
    int a[b];
    for( int i=a;i<=b;i++){
    	a[i]=i*i;
    	cout << a[i] << " " ;
    }
    return 0;
}
