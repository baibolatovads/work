/* Во входном файле (вы можете читать данные из файла input.txt) записан текст. 
Словом считается последовательность непробельных символов идущих подряд, слова 
разделены одним или большим числом пробелов или символами конца строки.

Определите, сколько различных слов содержится в этом тексте.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){

freopen ("input.txt", "r", stdin);
set <string> x, ans;
string s;

	while(cin >> s){
		if (x.find(s) != x.end()){
			ans.insert(s);
		}
		x.insert(s);
	}cout << x.size();

return 0;
}