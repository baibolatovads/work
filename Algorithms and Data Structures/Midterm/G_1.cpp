    #include <iostream>

    using namespace std;
    int a[100100];
    int n;

    void quicksort(int l, int r) {
        int init_l = l;
        int init_r = r;
        int mid = a[(l + r) / 2];
        while (l < r) {
            while (a[l] < mid) l++;
            while (a[r] > mid) r--;
            if (l <= r) {
                swap(a[l], a[r]);
                l++;
                r--;
            }
        }
        if (init_l < r)
            quicksort(init_l, r);
        if (l < init_r)
            quicksort(l, init_r);
    }
    int main() {
        int cnt = 0;
        cin >> n;
        
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        quicksort(0, n - 1);

        for(int i = 1; i <= n - 1; i++){
            if (a[i] < a[n - 1] && a[i] > a[0]) cnt++;      
        }cout << cnt;
        return 0;
    }