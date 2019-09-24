#include <iostream>
#include <vector>
#include <queue>
 
using namespace std;
int main(){
queue<int> maque;

maque.push (3);
maque.push (7);
maque.push (8);
cout << maque.size() << endl;
cout << maque.front() << endl;
cout << maque.back() << endl;
maque.pop();
cout << maque.back() << endl;

return 0;
}