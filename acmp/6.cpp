#include <iostream>
using namespace std;
int main() {

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    char a,b,z;
    char c,d;
    cin >> a >> c >> z;
    cin >> b >> d;
    if(z != '-' || ((int)a < 65 || (int)a > 72) || ((int)b < 65 || (int)b > 72) 
        || (int)c < 49 || (int)c > 56 || (int)d < 49 || (int)d > 56) {
            cout << "ERROR";
    }
    else {
        a = (int)a;
        b = (int)b;
        c = (int)c;
        d = (int)d;
        if((a - 1 == b && c + 2 == d) || (a - 1 == b && c - 2 == d) || 
            (a + 1 == b && c + 2 == d) || (a + 1 == b && c - 2 ==d )|| 
            (a - 2 == b && c + 1 == d) || (a - 2 == b && c - 1 == d) || 
            (a + 2 == b && c + 1 == d) || (a + 2 == b && b - 1 == d)) {
                cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    cout << endl;
    system("pause >> void");
    return 0;
}