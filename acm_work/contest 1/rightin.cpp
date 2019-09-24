#include <iostream>
 
using namespace std;

int a[100100];

int f(int *a ,int n, int x)
{
    int l = 0;
    int r = n - 1;

    while(l <= r){
        int m = (l + r)/2;
        if(a[m] <= x){
            l = m + 1;
        }
        else if(a[m] > x){
            r = m - 1;
        }
}
if(l > r) return r;

}

int main() {

freopen("right.in", "r", stdin);
freopen("right.out", "w", stdout);

int n, k, i, x, ans;
cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int j = 0; j < k; j++){
        cin >> x;
        i = f(a, n, x);
        ans = a[i];
        if (ans == x) cout << i + 1 << endl;
        else cout << 0 << endl;
    }


    return 0;
}