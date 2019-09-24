#include <bits/stdc++.h>
using namespace std;

vector <int> v;
int size = 0;

void push (int value){
	v.push_back(value);
	cout << "ok\n";
}

void pop(){
	if (v.empty()){
		cout << "error\n";
		return;
	}
	cout << v.back() << "\n";
	v.pop_back();
} 

void back(){
	if (v.empty()){
		cout << "error\n";
		return;
	}
	cout << v.back() << "\n";
}

void getsize(){
	cout << v.size() << "\n";
}

void clear(){
	v.clear();
	cout << "ok\n";
}

int main(){

	while(1){
		string s;
		cin >> s;
		int n;
			if (s == "exit"){
				cout << "bye\n";
				break;
			}
			else if (s == "push"){
				cin >> n;
				push(n);
			}
			else if (s == "pop"){
				pop();
			}
			else if (s == "back"){
				back();
			}
			else if (s == "size"){
				getsize();
			}
			else if (s == "clear"){
				clear();
			}
	}

return 0;
}

