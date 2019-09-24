#include <iostream>
#include <string>
using namespace std;
 
int main() {
	string cipher;
	getline(cin,cipher);
	int k;
	const int ABC_SIZE = 26; // Количество символов латинского алфавита
	cin >> k;
	string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for(int i = 0; i < cipher.length(); i++){
	    int find = cipher[i] - 'A';
	    if(find - k < 0) cipher.at(i) = alp.at(ABC_SIZE - (k - find));
	    else cipher.at(i) = alp.at(find-k);
	}
	cout << cipher;
	return 0;
}