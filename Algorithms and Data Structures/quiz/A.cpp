#include <bits/stdc++.h>
using namespace std;

stack<char> st;


int main(){

	int n;
	cin >> n;

	string s;
	
	for(int j = 1; j <= n; j++){
        
			cin >> s;
		for(int i = 1; i <= s.size(); i++)
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
    //st.clear();
 }
 

	return 0;
}