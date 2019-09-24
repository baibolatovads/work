#include <iostream>

using namespace std;

template<typename T>
class Node {
    public:
    T data;
    Node *next;
    Node *prev;
    Node(int data) {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

template<typename T>
class Queue {
    public:
    Node<T> *head, *tail;
    int sz;
    Queue() {
        head = NULL;
        tail = NULL;
        sz = 0;
    }
  void size() {
        cout << sz << "\n";
    }

    bool empty() {
        return sz == 0;
    }

     void push(T data) {
        Node<T> *node = new Node<T>(data);
        if (head == NULL) {
            head = node;
            tail = node;
        } else {
            // cout << data << " ";
            node->prev = tail;
            tail->next = node;
            tail = node;
        }
        sz++;
        cout << "ok\n";
    }

    void pop() {
        if (head != NULL) {
        	cout << head->data << "\n";
            head = head->next;
            sz--;
        }
        else cout << "error\n";
    }

    void front(){
    	if (head != NULL){
    		cout << head -> data << "\n";
    	}
    	else {
    		cout << "error\n";
    	}
    }

    void clear(){
    	head = NULL;
    	sz = 0;
    	cout << "ok\n";
    }
};
   int main(){
   	Queue<int> *queue = new Queue<int>();

   	string s;
   	int n;

   	while(1){
   		cin >> s;
   		if (s == "push"){
   			cin >> n;
   			queue->push(n); 
   		}
   		else if (s == "pop"){
   			queue->pop();
   		}
   		else if (s == "front"){
   			queue->front();
   		}
   		else if (s == "size"){
   			queue->size();
   		}
   		else if (s == "clear"){
   			queue->clear();
   		}
   		else if (s == "exit"){
   			cout << "bye";
   			break;
   		}
   	}
   	return 0;
   }
