#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int max_size = 100;
struct Stack{
	int size;
	int data[max_size];

Stack(){
	size = 0;
}

bool isEmpty(){
	return size == 0;
}

void push (int value){
	data[size++] = value;
	cout << "ok\n";
}

void pop(){
	if (isEmpty()){
		cout << "error\n";
		return;
	} 
	cout << data[size - 1] << "\n";
	size--;		
}

void back(){
	if (isEmpty()){
		cout << "error\n";
		return;
	} 
	cout << data[size - 1] << "\n";
}

void getsize(){
	cout << size << "\n";
}
void clear(){
	for (int i = 0; i < size; i++){
		data[i] = 0;
	}
	size = 0;
	cout << "ok\n";
}

};

int main(){
	
Stack st;
	while(1){
	
		string s;
		cin >> s;
		int n;
	if(s == "exit"){
		cout << "bye\n";
		break;
	}
	else if (s == "push"){
		cin >> n;
	    st.push(n);
	}
	else if (s == "pop"){
		st.pop();
	}
	else if (s == "back"){
		st.back();
	}
	else if (s == "size"){
		st.getsize();
	}
	else if (s == "clear"){
		st.clear();
	}
}

	return 0;
}