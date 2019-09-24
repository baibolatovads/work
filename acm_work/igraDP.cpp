#include <bits/stdc++.h>
using namespace std;

int main(){
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	deque <int> v;
	int a, cnt1 = 0, cnt2 = 0;
	bool first = true;

			for(int i = 0; i < n; i++){
					cin >> a;
					v.push_back(a);
			}

		while(!v.empty()){
			if(v.front() > v.back()){
				if(first == true){
					cnt1 += v.front();
					v.pop_front();
					first = false;
				}
				else {
					cnt2 += v.front();
					v.pop_front();
					first = true;
				}
			}
			else {
				if(first == true){
				cnt1+= v.back();
				v.pop_back();
				first = false;
			}else{
				cnt2 += v.back();
				v.pop_back();
				first = true;
			}

		}
	}

	if(cnt1 > cnt2) cout << 1 << endl;
	else if(cnt1 < cnt2) cout << 2 << endl;
	else cout << 0 << endl;

	return 0;
}