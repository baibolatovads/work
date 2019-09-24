#include <bits/stdc++.h>
using namespace std;

vector <int> v;
int size = 0;

void insert (int value){
	v.push_back(value);
	cout << "ok";
}

void delme(int value){
	for(int i = v.size() - 1; i > 0; i--){
		if (v[i] == value){
			//int k = i;
			v.erase(v.end() - i);
			break;
		}
		
	}
	cout << "ok";
}

void deleteFirst(){
	v.erase(v.begin() + 0);
}

void deleteLast(){
	v.erase(v.end() - 1);
}
void print(){
	for (int i = v.size() - 1; i >= 0; i--){
		cout << v[i] << " ";
	}
}
int main(){

		//freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
		string s;
		int n, x;
		cin >> x;
		for (int i = 0; i < x; i++){
			cin >> s;
		if (s == "insert"){
			cin >> n;
			insert(n);	
			
		}
		else if (s == "delete"){
			cin >> n;
			delme(n);
			
		}
		else if (s == "deleteFirst"){
			deleteFirst();
			
		}
		else if (s == "deleteLast"){
			deleteLast();
		}
		
	}
	print();
	return 0;
}

