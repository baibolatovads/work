#include <iostream>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;
int main(){

	deque<int> d;

	int n;
	cin >> n;
	string s;
	bool ok = false;
	int k;
			for(int i = 0; i < n; i++){
				cin >> s;
				if (s == "reverse"){
					if (ok == true) ok = false;
					else ok = true;
				}
				if(ok = false){
					if (s == "push_back"){
						cin >> k;
						d.push_back(k);
						
					}
					else if (s == "push_front"){
						cin >> k;
						d.push_front(k);
						
					}
					else if (s == "front" && !d.empty()){
						cout << d.front() << endl;;
						d.pop_front();
						
					}
					else if (s == "back" && !d.empty()){
						cout << d.back() << endl;;
						d.pop_back();
						
					}
					else if (s == "back" && d.empty() || s == "front" && d.empty()){
						cout << ";(" << endl;
					}
				}else if (ok == true){
					if (s == "push_back"){
						cin >> k;
						d.push_front(k);
						
					}
					else if (s == "push_front"){
						cin >> k;
						d.push_back(k);
						
					}
					else if (s == "front" && !d.empty()){
						cout << d.back() << endl;;
						d.pop_back();
						
					}
					else if (s == "back" && !d.empty()){
						cout << d.front() << endl;
						d.pop_front();
						
					}
					else if (s == "back" && d.empty() || s == "front" && d.empty()){
						cout << ";(" << endl;
					}
				}
			}		



	return 0;
}