#include <iostream>

using namespace std;

template<typename T>
class Node {
    public:
    T data;
    Node *next;
    Node(T data) {
        this->data = data;
        next = NULL;
    }
};

template<typename T>
class Stack {
    public:
    Node<T> *top;
    int sz;
    Stack() {
        top = NULL;
        sz = 0;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return sz == 0;
    } 

    void push(T data) {
        Node<T> *node = new Node<T>(data);
        node->next = top;
        top = node;
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

Stack< pair<int, int> > * stack = new Stack<pair <int, int> >;
string s;
int n;
    return 0;

}