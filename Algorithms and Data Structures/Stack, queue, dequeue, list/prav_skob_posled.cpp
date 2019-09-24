/*Рассмотрим последовательность, состоящую из круглых, квадратных и фигурных
 скобок. Программа дожна определить, является ли данная скобочная 
 последовательность правильной.

Пустая последовательность явлется правильной. Если A – правильная, 
то последовательности (A), [A], {A} – правильные. Если A и B – правильные
 последовательности, то последовательность AB – правильная
 */
#include <iostream>
#include <stack>
 
using namespace std;
 
stack<char> st;
 
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(!st.empty() && st.top() == '(' && s[i] == ')')
            st.pop();
        else if(!st.empty() && st.top() == '[' && s[i] == ']')
            st.pop();
        else if(!st.empty() && st.top() == '{' && s[i] == '}')
            st.pop();
        else
            st.push(s[i]);
    }
 
    if(st.empty())
        cout << "yes";
    else
        cout << "no";
    return 0;
}