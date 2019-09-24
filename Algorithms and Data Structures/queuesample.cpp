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

    int size() {
        return sz;
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
        cout << "ok\n";
    }

    void pop_front() {
        cout << head->data << "\n";
        if (head != NULL) {
            head = head->next;
            sz--;
        }
    }

    void pop_back() {
        cout << tail->data << "\n";
        if (tail != NULL) {
            tail = tail->prev;
            sz--;
        }
    }

    T first() {
        return head->data;
    }

    T last() {
        return tail->data;
    }

    void print() {
        Node<T> *node = head;
        while (node != NULL) {
            cout << node->data << " ";
            node = node->next;
        }
    }
};

int main(){
    string s;
    int n;

    while(1){
        cin >> s;

        if (s == "push_front"){
            cin >> n;
            push_front(n);
        }
        else if (s == "push_back"){
            cin >> n;
            push_back(n);
        }
        else if (s == "pop_front"){
            pop_front();
        }
        else if (s == "pop_back"){
            pop_back();
        }
        else if (s == "front"){
            
        }

    }
}