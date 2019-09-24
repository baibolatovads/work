#include <bits/stdc++.h>
using namespace std;

int main(){

	queue<string> q;
	int n;
	cin >> n;
	int r;
	string s;

		for(int i = 0; i < n; i++){
			cin >> r;
			if(r == 1){
				cin >> s;
				q.push_back(s);
			}
			else if(r == 2){
				if (!q.empty()) cout << q.front() << endl;
				else cout << "queue is empty" << endl;
				q.pop_front();
			}
		}

	



	return 0;
}