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

    void push_back(T data) {
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

    void push_front(T data) {
        Node<T> *node = new Node<T>(data);
        if (head == NULL) {
            tail = node;
            head = node;
        } else {
            node->next = head;
            head->prev = node;
            head = node;
        }
        sz++;
        cout << "ok\n";
    }

    void pop_front() {
        cout << head -> data << "\n";
        if (head != NULL) {
            head = head->next;
            sz--;
        }
    }

    void pop_back() {
        cout << tail -> data << "\n";
        if (tail != NULL) {
            tail = tail->prev;
            sz--;
        }
    }

    void front() {
        if(head != NULL){
        cout << head->data << "\n";
    }
    }

    void back() {
        if (tail != NULL){
        cout << tail->data << "\n";
    }
    }

    void print() {
        Node<T> *node = head;
        while (node != NULL) {
            cout << node->data << " ";
            node = node->next;
        }
    }

    void clear(){
        sz = 0;
        tail = NULL;
        head = NULL;
        cout << "ok\n";
    }
}; 

int main() {
    Queue<int> *queue = new Queue<int>();
    string s;
    int n;

    while(1){
        cin >> s;
        if (s == "push_front"){
            cin >> n;
            queue -> push_front(n);
        }
        else if (s == "push_back"){
            cin >> n;
            queue -> push_back(n);
        }
        else if (s == "pop_front"){
            queue -> pop_front();
        }
        else if (s == "pop_back"){
            queue -> pop_back();
        }
        else if (s == "front"){
            queue -> front();
        }
        else if (s == "back"){
            queue -> back();
        }
        else if (s == "clear"){
            queue -> clear();
        }
        else if (s == "size"){
            queue -> size();
        }
        else if (s == "exit"){
            cout << "bye\n";
            break;
        }
    }
    return 0;
}   