#include <iostream>
#include <deque>
using namespace std;
int main(){
     int n;
     cin>>n;
     string s;
     deque<int> dq;
    
     int x;
     bool ok=false;
      for(int i=0; i<n; i++){
       cin>>s;
        if(s=="reverse"){
         if(ok==true) ok=false;
         else ok=true;
       }
          if(ok==false){
       if(s=="push_back"){
        cin>>x;
        dq.push_back(x);
        
       }
       else if(s=="push_front"){
        cin>>x;
        dq.push_front(x);
       }
       else if(s=="front" && !dq.empty()){
        cout<<dq.front()<<endl;
        dq.pop_front();
       }
       else if(s=="back" && !dq.empty()){
        cout<<dq.back()<<endl;
        dq.pop_back();
       }
       
       else if((s=="back" && dq.empty()) || (s=="front" && dq.empty())){
        cout<<";("<<endl;
       }
      }
      else if(ok==true){
       if(s=="push_back"){
        cin>>x;
        dq.push_front(x);
        
       }
       else if(s=="push_front"){
        cin>>x;
        dq.push_back(x);
       }
       else if(s=="front" && !dq.empty()){
        cout<<dq.back()<<endl;
        dq.pop_back();
       }
       else if(s=="back" && !dq.empty()){
        cout<<dq.front()<<endl;
        dq.pop_front();
       }
       
       else if((s=="back" && dq.empty()) || (s=="front" && dq.empty())){
        cout<<";("<<endl;
       }
      }

      }

 return 0;
}