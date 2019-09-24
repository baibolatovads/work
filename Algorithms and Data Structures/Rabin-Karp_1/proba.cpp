#include <iostream>
using namespace std;

int main(){

	//префикс и суффикс, находим max префикс который равен суффиксу
	string s;
	cin >> s;
	int n = s.size();
	int p[n];
	p[0] = 0;
	int j = 0, i = 1;	
	
		while(i != n){
		if(s[i] == s[j]) {
				p[i] = j + 1;
				i++;
				j++;
		}else if (j == 0){
			p[i] = 0;
			i++;
		}
		else j = p[j - 1];
	}

	for(int d = 0; d < n; d++){
		cout << p[d] << " ";
	}
	return 0;
}