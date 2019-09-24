/*В игре в пьяницу карточная колода раздается поровну двум игрокам. 
Далее они вскрывают по одной верхней карте, и тот, чья карта старше, 
забирает себе обе вскрытые карты, которые кладутся под низ его колоды. 
Тот, кто остается без карт – проигрывает.

Для простоты будем считать, что все карты различны по номиналу, а также, 
что самая младшая карта побеждает самую старшую карту ("шестерка берет туза").

Игрок, который забирает себе карты, сначала кладет под низ своей колоды 
карту первого игрока, затем карту второго игрока (то есть карта второго 
игрока оказывается внизу колоды).

Напишите программу, которая моделирует игру в пьяницу и определяет, кто 
выигрывает. В игре участвует 10 карт, имеющих значения от 0 до 9, большая 
карта побеждает меньшую, карта со значением 0 побеждает карту 9.
*/

#include <iostream>
#include <cmath>

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
            //cout << top -> data;
            top = top->next;
            sz--;
            
        }

    }
    void clear(){
        top = NULL;
        sz = 0;
    }
};

int main(){

    Stack<int> * stack1 = new Stack<int>;  
    Stack<int> * stack2 = new Stack<int>;  
    int sa, sb;
    int a[5], b[5];
    int k = 0;
    bool stop = false;

            for(int i = 0; i < 5; i++){
                cin >> a[i];
                stack1 -> push(a[i]);
            }
            for(int i = 0; i < 5; i++){
                cin >> b[i];
                stack2 -> push(b[i]);
            }

    while(!stop){
            sa = stack1 -> back();
            sb = stack2 -> back();
            if(sa > sb){
                if(sa == 9 && sb == 0){
                    stack2 -> push(sa);
                    stack2 -> push(sb);
                }
                else{
                    stack1 ->push(sb);
                    stack1 ->push(sa);
                }
            }
            if (sa < sb){
                if (sa == 0 && sb == 9){
                    stack1 -> push(sb);
                    stack1 -> push(sa);
                }
                else{
                    stack2 -> push(sa);
                    stack2 -> push(sb);
                }
            }
            k++;
            stack1 -> pop();
            stack2 -> pop();

            if(stack1 -> empty()){
                cout << "second " << k; 
                stop = true;
            }
            else if (stack2 -> empty()){
                cout << "first " << k;
                stop = true; 
            } 
            if (k > 1000000){
                cout << "botva";
                stop = true;
            }     
}

return 0;
}