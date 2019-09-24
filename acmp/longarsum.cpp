#include <bits/stdc++.h>
using namespace std;

int main(){
string a, b, c = "";

cin >> a >> b;

int lena = a.length()-1, lenb = b.length()-1,

maxl = max(lena, lenb), carry = 0, op1, op2;

for(int i = 0;i <= maxl; i++){

op1 = i<=lena ? a[lena-i]-'0' : 0;

op2 = i<=lenb ? b[lenb-i]-'0' : 0;

c = char((op1 + op2 + carry) % 10 + '0') + c;

carry = (op1 + op2 + carry) / 10;

}

if(carry) c = char(carry + '0') + c;

cout << c;
return 0;
}
