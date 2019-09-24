#include <iostream> 
 

using namespace std; 
int main() {


int n;
cin >> n;
int a[n];

for (int i=0; i < n; ++i){
	cin >>  a[i] ;
}

bool found = false;

for (int i = 0; i < (n-1); ++i){
	if (a[i] * a[i+1]>0){
		found=true;
		break;
	}
}
	if (found){
		cout << "YES";
	}else{
		cout << "NO";
	}
return 0;
}