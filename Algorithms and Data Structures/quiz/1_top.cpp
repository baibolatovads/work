#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int max_size = 100;
struct Stack{
int size;
char data[max_size];

Stack(){
	size = 0;
}

void push(char value){
	data[size++] = value;
	
}

bool empty(){
	return size == 0;
}

int pop(){
	if(size > 0){
	size--;
}
	//return data[size];
}

int givesize(){
	return size;
}

int top(){
	return data[size - 1];
}

void clear(){
	for(int i = 0; i < size; i++){
		data[i] = 0;
	}
	size = 0;
	//return "ok";
}
};

int main(){
Stack st;
	int n;
	cin >> n;

	string s;
	
	for(int j = 1; j <= n; j++){
			cin >> s;
		for(int i = 1; i <= s.size(); i++)
    {
        if(!st.empty() && st.top() == '(' && s[i] == ')')
            st.pop();
        else if(!st.empty() && st.top() == '[' && s[i] == ']')
            st.pop();
        else if(!st.empty() && st.top() == '{' && s[i] == '}')
            st.pop();
        else
            st.push(s[i]);
    }
     if(st.empty())
        cout << "YES\n";
    else
        cout << "NO\n";
    st.clear();
 }

 return 0;
}
