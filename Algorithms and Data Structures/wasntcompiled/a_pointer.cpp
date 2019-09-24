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
        cout << "ok\n";
    }

    void back() {
         if (top != NULL) {
            cout << top -> data << "\n";
        }
        else {
            cout << "error\n";
            return;
        }
    }

    void pop() {

        //Node<T> *node = new Node<T>(data);
        if (top != NULL) {
            cout << top -> data << "\n";
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
        cout << "ok" << "\n";
    }
};

int main(){

Stack<int> * stack = new Stack<int>;
string s;
int n;
while(1){
    cin >> s;
    if (s == "push"){
        cin >> n;
        stack->push(n);
    }
    else if (s == "pop"){
        stack->pop();
    }
    else if (s == "back"){
        stack->back();
    }
    else if (s == "size"){
        cout << stack->size() << "\n";
    }
    else if (s == "clear"){
        stack->clear();
    }
    else if (s == "exit"){
        cout << "bye";
        break;
    }
}
    return 0;

}