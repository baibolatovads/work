#include <bits/stdc++.h>

using namespace std;

int main(){


    string s, t = "";
    getline(cin, s);
    int k;
    int n = s.length();
    bool ok = true;
    

    for (int i = 0; i < n; i++){
    	if (s[i] != ' ')
    		t += s[i];
    }
    
    for (int i = 0; i<t.size()/2; i++){
    	if (t[i]!= t[n-i-1]){
    		ok = false;
    		break;
    	}
    }if (ok) cout << "no";
    else cout << "yes";
    
    return 0;
}