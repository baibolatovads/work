#include <bits/stdc++.h>
using namespace std;

vector <int> v, v1;
int size = 0;

void insert (int value){
	v.push_back(value);
	//cout << "ok";
}

void delme(int value){
	for(int i = (int)v.size() - 1; i >= 0; i--){
		if (v[i] == value){
			v.erase(v.begin() + i);
			break;
		}
		
	}
	//cout << "ok";
}

void deleteFirst(){
	
	v.erase(v.end() - 1);
}

void deleteLast(){
	v.erase(v.begin() + 0);
}
void print(){
	cout << v.back();
	for (int i = (int)v.size() - 2; i >= 0; i--){
		cout << " " << v[i];
	}
	cout << endl;
}
int main(){

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