#include <bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin >> n;

	string s;
	
	for(int j = 0; j < n; j++){
        stack<char> st;
			cin >> s;
		for(int i = 0; i < s.size(); i++)
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
        cout << "YES\n";
    else
        cout << "NO\n";
   // st.clear();
 }
 

	return 0;
}