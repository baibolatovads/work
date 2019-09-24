#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	string s;
	cin >> s;
	int n;
	cin >> n;

	if (s == "School" && n % 2 == 0 ) cout << "No";
	else cout << "Yes";

return 0;
}