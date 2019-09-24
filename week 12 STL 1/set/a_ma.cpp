/* Реализуйте бинарную операцию над множествами — симметрическую разность. 
Ее результатом являются те элементы двух множеств, которые принадлежат ровно 
одному из множеств (но не принадлежат их пересечению).
*/

#include <bits/stdc++.h>
using namespace std;
int main(){

int n, m, a, b;
set <int> s1;
set <int> s2;
set <int> ans;

cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a;
		s1.insert(a);
	}

cin >> m;

	for (int i = 0; i < m; i++){
		cin >> b;
		s2.insert(b);
	}

set <int> :: iterator it;

	for (it = s1.begin(); it != s1.end(); it++){
		int k = *it;
		if (s2.find(k) == s2.end())
			ans.insert(k);
	}

	for (it = s2.begin(); it != s2.end(); it++){
		int k = *it;
		if (s1.find(k) == s1.end())
			ans.insert(k);
	}

		cout << ans.size() << endl;

	for (it = ans.begin(); it != ans.end(); it++){
		cout << *it << " ";
	}

return 0;
}