#include <bits/stdc++.h>
using namespace std;

const int max_size = 100;
struct queue1{

int data[max_size];
int l, r;

queue1(){
	l = r = 0;
}

void push(int value){
	data[++r] = value; //добавляем в конец
	cout << "ok";
}

void pop(){
	l++;
	if (l < r) cout << data[l];
}

};

int main(){
	queue1 q;
	while(1){
	string s;
	int n;
	cin >> s;
	if (s == "push"){
		cin >> n;
		q.push(n);
	}
	else if (s == "pop"){
		q.pop();
	}
}
return 0;
}
