/*Во входном файле (вы можете читать данные из файла input.txt) записан текст. 
Словом считается последовательность непробельных символов идущих подряд, слова 
разделены одним или большим числом пробелов или символами конца строки.

Для каждого слова из этого текста подсчитайте, сколько раз оно встречалось в 
этом тексте ранее.
*/

#include <bits/stdc++.h>

using namespace std;
int main(){

	//freopen ("input.txt", "r", stdin);
	map<string ,int> m;
	string x;
	while(cin>>x){
		cout<<m[x]<<" " ;
		m[x]=m[x]+1;
	}
	return 0;

}

