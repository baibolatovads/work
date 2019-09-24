#include <bits/stdc++.h>

using namespace std;

int main(){

	
	string s;
	cin >> s;
	

	int n = s.size();

	
	cout << s[2] << endl;

	cout << s[n-2] << endl;

	for(int i = 0; i < 5; i++) {
		cout << s[i];
	}
	cout << endl;
	
	for (int i = 0; i < n-2; i++){
	cout << s[i];
	}cout << endl;

	for (int i = 0; i<n; i++){
		if(i % 2 == 0)
			cout << s[i];
	}
	cout << endl;

	for (int i = 0; i < n; i++){
		if (i % 2 != 0)
			cout << s[i];
	}
	cout << endl;
	for(int i = n-1; i >= 0; i--)
		cout << s[i];
	cout << endl;
	for(int i = n-1; i >= 0; i-=2)
		cout << s[i];	
	cout << endl << n;
	return 0;

}