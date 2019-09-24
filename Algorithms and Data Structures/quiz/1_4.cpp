#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<char> st;
vector<char> :: iterator it;

int main(){
int n;
	cin >> n;

	string s;
	int sz = st.size();
	for(int j = 1; j <= n; j++){
			cin >> s;
		for(int i = 1; i <= s.size(); i++)
			
    {
        if(!st.empty() &&  st[sz] == '(' && s[i] == ')')
            st.pop_back();
        else if(!st.empty() && st[sz] == '[' && s[i] == ']')
            st.pop_back();
        else if(!st.empty() && st[sz] == '{' && s[i] == '}')
            st.pop_back();
        else
            st.push_back(s[i]);
    }
     if(st.empty())
        cout << "YES\n";
    else
        cout << "NO\n";
    
    for(int i = st.begin(); i != st.end(); i++){
    		st[i] = '';
    }
 }
 


	return 0;
}