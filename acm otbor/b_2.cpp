#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){

    //freopen("input.txt", "r", stdin);
    string s;
    while (getline(cin, s)){
        int words[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            words[(ch - 'a')]++;
        }

        for (int j = 0; j < 26; j++) {
            cout << (char)(j + 'a') << ':' << words[j] << "\n";
        }
        cout << "\n";
    }


    return 0;
}