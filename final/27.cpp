#include <bits/stdc++.h>
using namespace std;
int main(){

	double n;
	cin >> n;

	double percent = (100 * n)/80;

	int schoolchildren = (percent * 850)/100;
	int students = (percent * 2250)/100;
	int pensioners = (percent * 1500)/100;

	cout << schoolchildren << " " << students << " " << pensioners;

return 0;
}