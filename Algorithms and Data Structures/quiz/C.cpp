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
    int fullsz, sz;
    Queue(int fullsz) {
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

    bool isfull(){
        return sz == fullsz;
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
        cout << "Pushed in left: " << data;
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
        cout << "Pushed in right: " << data;
    }

    void pop_front() {
        if (head != NULL) {
            cout << "Popped from left: " << head -> data << "\n";
            head = head->next;
            sz--;
        }
        
    }

    void pop_back() {
        
        if (tail != NULL) {
            cout << "Popped from right: " << tail -> data << "\n";
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

int main(){

    int t, n, m, x;
    cin >> t >> n >> m;

    Queue<int> *queue = new Queue<int>(n);
    string s;
    
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ":" << endl;
        //n = queue -> size;
        while(1){
            m--;
            cin >> s;
            if (s == "pushLeft" || s == "pushRight"){
                if (!queue -> isfull()){
                    if(s == "pushLeft"){
                        cin >> x;
                        queue -> push_back(x);
                    }
                    else if (s == "pushRight"){
                        cin >> x;
                        queue -> push_front(x);
                    }
                }else {
                    cout << "The queue is full\n";
                }
            }
              else if (s == "popLeft" || s == "popRight"){
                 if (!queue -> empty()){
                    if (s == "popLeft"){
                        queue -> pop_back();
                    }
                    else if (s == "popRight"){
                        queue -> pop_front();
                    }
                 }
                 else {
                    cout << "The queue is empty\n";
                 }
              }
              if (m == 0){
                break;
              }
        }
        
            
        
    }
    return 0;
}
