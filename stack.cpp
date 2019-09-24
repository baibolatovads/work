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

string push(int value){
	data[size++] = value;
	return "ok";
}

int pop(){
	if(size > 0){
	size--;
}
	return data[size];
}

int givesize(){
	return size;
}

int back(){
	return data[size - 1];
}

string clear(){
	for(int i = 0; i < size; i++){
		data[i] = 0;
	}
	size = 0;
	return "ok";
}
};

/*string stack::push(int value){
	data[size++] = value;
	return "ok";
}

void stack::pop(){
	if(size > 0) 
}
*/
int main(){
	Stack st;
	map <string, string> m;
	while(1)
	{
		string s;
		cin >> s;
		int n;
		
		if(s=="exit") {
			cout << "bye\n";
			break;
		}
		else if(s == "push") {
			cin  >> n;
			cout << st.push(n) << "\n";
		}
		else if(s == "pop"){
			cout << st.pop() << "\n";
		}
		else if(s == "size"){
			cout << st.givesize() << "\n";
			}
		else if (s == "back"){
			cout << st.back() << "\n";
		}
		else if(s == "clear"){
			cout << st.clear() << "\n";
		}
		}
	return 0;
}
