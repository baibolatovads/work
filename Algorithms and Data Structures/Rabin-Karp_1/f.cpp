#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int maxSize(string s){ 
    int n = s.size();
    vector<int> p(n);
    int maxi = 0;
    p[0] = 0;
    for(int i = 1;i<n;++i){
        int j = p[i-1];

        while(j>0 && s[i]!=s[j]){
            j = p[j-1];
        }
        
        if(s[i] == s[j]){
            j = j+1;
        }
        p[i] = j;
        maxi = max(maxi,p[i]);
    }
   
    return maxi;
    
}

int main(){

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int m;
    cin >> m;
    
    
    while(m>0){
        string s;
        cin >> s;
        int k = 0;
        int n = s.size();
        string p = "";
        for(int j = 0;j<n;++j){

            p+=s[j];
            reverse(p.begin(),p.end());
            k+=p.length() + 1 - maxSize(p);
            reverse(p.begin(),p.end());

        }
        cout << k - s.length() << "\n";
        m--;
    }
    

    return 0;
}