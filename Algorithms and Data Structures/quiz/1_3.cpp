#include <iostream>

using namespace std;

template<typename T>
class Node {
    public:
    T data;
    Node *next;
    Node(T data) {
        this->data = data;
        //next = NULL;
    }
};

template<typename T>
class Stack {
    public:
    Node<T> *top;
    int sz;
    Stack() {
        //top = NULL;
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

    T top() {
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
        //top = NULL;
        sz = 0;
    }
};

int main(){

Stack<char> * st = new Stack<char>;
int n;
    cin >> n;

    string s;
    
    for(int j = 1; j <= n; j++){
            cin >> s;
        for(int i = 1; i <= s.size(); i++)
    {
        if(!st ->empty() && st ->top() == '(' && s[i] == ')')
            st ->pop();
        else if(!st.empty() && st ->top() == '[' && s[i] == ']')
            st ->pop();
        else if(!st ->empty() && st ->top() == '{' && s[i] == '}')
            st ->pop();
        else
            st ->push(s[i]);
    }
     if(st ->empty())
        cout << "YES\n";
    else
        cout << "NO\n";
    st ->clear();
 }
 
    return 0;

}