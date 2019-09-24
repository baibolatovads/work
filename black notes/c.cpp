#include <iostream>

using namespace std;


int main(){

	int n;
	cin >> n;
	string a[n];
	int i = 0;
	i++;

		while(cin >> a[i]){
		if(best.size() < a[i].size()){
			best = a[i];
		}
	}
	

	char d;
	cin >> d;
	

	for (int i = 0; i < best.size(); i++){
		if (a[1] == d)
			cout << a[i];
	}

	return 0;
}



