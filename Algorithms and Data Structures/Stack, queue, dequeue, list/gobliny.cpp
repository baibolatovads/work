/*В первой строке входных данный записано число N (1N105) - количество запросов 
к программе. Следующие N строк содержат описание запросов в формате:

"+ i" - гоблин с номером i (1iN) встает в конец очереди.
"* i" - привилегированный гоблин с номером i встает в середину очереди.
"-" - первый гоблин из очереди уходит к шаманам. Гарантируется, что на момент 
такого запроса очередь не пуста.
Для каждого запроса типа "-" программа должна вывести номер гоблина, 
который должен зайти к шаманам.
*/

#include <iostream>
#include <deque>
 
using namespace std;
 
deque<int> f, s;
 
void upd()
{
    if(f.size()<s.size())
    {
        f.push_back(s.front());
        s.pop_front();
    }
}
void push(int x)
{
    s.push_back(x);
    upd();
}
 
void priority_push(int x)
{
    s.push_front(x);
    upd();
}
 
int pop()
{
    int res = f.front();
    f.pop_front();
    upd();
    return res;
}
 
int main()
{
    int n, x;
    char ch;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> ch;
        if(ch == '+')
        {
            cin >> x;
            push(x);
        }
 
        if(ch == '*')
        {
            cin >> x;
            priority_push(x);
        }
 
        if(ch == '-')
        {
            cout << pop() << endl;
        }
    }
    return 0;  
}
