/*Дается строка, уберите все одинаковые рядом стоящие буквы, если после удаления образуются
новые рядом стоящие одинаковые буквы, то процесс нужно повторять до тех пор, пока не исчезнут
такие символы.*/

#include <iostream>

using namespace std;

int main(){

	string s;
	getline(cin,s);
	int len = 1;

	bool ok = false;

	while(!ok){
		ok = true;
		for(int i = 0; i < s.size(); ++i){
			while(s[i] == s[i + len]){
				len++;
			}
			if(len > 1){
				ok = false;
				s.erase(i,len);
				len = 1;
				i--;
			}
		}
	}

	cout << s << endl;
	
	return 0;
}