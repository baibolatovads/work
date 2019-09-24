#include <bits/stdc++.h>
using namespace std;
int main(){

	string s;
	cin >> s;

	s += '!';
	int k = 0;
	int i = 0;

		while(true){
			if (s[i]=='a'){
				k++;
			}
			else if (s[i]=='o'){
				k++;
			}
			else if (s[i]=='e'){
				k++;
			}
			else if (s[i]=='i'){
				k++;			
			}
			else if (s[i]=='u'){
				k++;
			}
			else if (s[i]=='!'){
				break;
			}
			i++;
		}

		cout << k;

return 0;
}