#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	int a;
	int max = -10000;
	set<int> s1;
		for (int i = 0; i < n; i++){
			cin >> a;
			s1.insert(a);
			if (a > max){
				max = a;
			}
			
		}

//s1.swap(s2);
set<int> :: iterator it;

		/*for (it = s1.begin(); it != s1.end(); it++){
			cout << *it << " ";
		}*/

	cout << s1.find(max);
return 0;
}