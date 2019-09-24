//Требуется найти самую длинную непрерывную цепочку нулей в последовательности нулей и единиц.

#include <bits/stdc++.h>
using namespace std;
int main(){

//freopen ("input.txt", "r", stdin);
//freopen ("output.txt", "w", stdout);
string s;
getline (cin, s);

int maxcount = 0;
int count =  0;
	
	for (int i = 0; i < s.size(); i++){
		count = 1;
		if (s[i] == '0'){
			while (s[i + count] == '0'){
				count++;
			}
			if (count > maxcount){
				maxcount = count;
			}
		}
	}cout << maxcount << endl;

return 0;
}