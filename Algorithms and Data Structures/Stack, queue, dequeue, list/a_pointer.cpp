#include <iostream>

using namespace std;

template<typename T>

class Node{
public:
	T data;
	Node *next;

	Node(T data){
		this->data = data;
		next = NULL;
	}
};

template<typename T>

class Stack{
public:
	Node<T> top;
	int sz;

	Stack(){
		sz = 0;
		top = NULL;
	}

	int size(){
		return size;
	}

		return sz == 0;
	}

	bool empty(){
	void push(T data){
		Node<T> node = new Node<T>(data);
		node->next = top;
		top = node;
		sz++;
	}

	void pop(){
		if(top != NULL){
			cout << top->data;
			top = top->next;
			sz--;
			
		}
		else {
			cout << "error\n";
			return;
		}
	}

	void back(){
		if (top != NULL){
			cout << top->data;
		}
		else {
			cout << "error\n";
			return;
		}
	}

	void clear(){
		top = NULL;
		sz = 0;
	}
};

int main(){
	Stack<int> * stack = new Stack<int>;
	string s;
	int n;
	while(1){
		cin >> s;
		if (s == "exit"){
			cout << "bye";
			break;
		}
		else if (s == "push"){
			cin >> n;
			stack->push(n);
		}
		else if (s == "pop"){
			stack->pop();
		}
		else if (s == "back"){
			stack->back();
		}
	}
	return 0;
}