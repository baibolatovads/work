#include <iostream>
#include <vector>
#include <queue>
 
using namespace std;
int main(){
queue<int> maque;

maque.push (3);
maque.push (7);
cout << maque.size() << endl;
cout << maque.front() << endl;

return 0;
}