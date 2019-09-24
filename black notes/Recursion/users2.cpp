#include <iostream>
#include <map>
using namespace std;
int main(){

	int n;
	cin >> n;
	string name;
	map<string, int> m;

		for(int i = 1; i <= n; i++){
			cin >> name;
			m[name]++;
			if(m[name] == 1) cout << "OK" << endl;
			else cout << name << m[name] - 1 << endl;
		}

return 0;
}