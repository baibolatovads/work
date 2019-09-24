#include <iostream>

using namespace std;

template<typename T>
class Node {
    public:
    char data;
    Node *next;
    Node(char data) {
        this->data = data;
        next = '';
    }
};

template<typename T>
class Stack {
    public:
    Node<char> *top;
    int sz;
    Stack() {
        top = '';
        sz = 0;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return sz == 0;
    } 

    void push(char data) {
        Node<char> *node = new Node<char>(data);
        node->next = top;
        top = node;
        sz++;
    }

    char top() {
        return top->data;
    }

    void pop() {

        //Node<T> *node = new Node<T>(data);
        if (top != '') {
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
        top = '';
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
        if(!st -> empty() && st -> top() == '(' && s[i] == ')')
            st -> pop();
        else if(!st -> empty() && st -> top() == '[' && s[i] == ']')
            st -> pop();
        else if(!st -> empty() && st -> top() == '{' && s[i] == '}')
            st -> pop();
        else
            st -> push(s[i]);
    }
     if(st -> empty())
        cout << "YES\n";
    else
        cout << "no\n";
    while(!st.empty()){
    st -> top() == '';
 }
}

 return 0;
}