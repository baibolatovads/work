#include <iostream>

using namespace std;

template<typename T>
class Node {
    public:
    T data;
    T data2;
    Node *next, *next2;
    Node(T data, T data2) {
        this->data = data;
        this->data2 = data2;
        next = NULL;
        next2 = NULL;
    }
};

template<typename T>
class Stack {
    public:
    Node<T> *top;
    Node<T> *top2;
    int sz;
    Stack() {
        top = NULL;
        top2 = NULL;
        sz = 0;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return sz == 0;
    } 

    void push(T data, T data2) {
        Node<T> *node = new Node<T>(data, data2);
        node->next = top;
        node->next2 = top2;
        top = node;
        top2 = node;
        sz++;
    }

    T back() {
        return top->data;
    }

    void pop() {

        //Node<T> *node = new Node<T>(data);
        if (top != NULL) {
            cout << top -> data;
            top = top->next;
            sz--;
            
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

Stack< pair<string, string> > * stack = new Stack<pair <string, string> >;
string s;
string n, m;
cin >> n >> m;

stack -> push(n, m);
    return 0;

}