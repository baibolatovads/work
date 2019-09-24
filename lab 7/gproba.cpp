    #include <iostream>
    using namespace std;
    int main() {
     
            int n, m, s = 0; 
            cin >> n >> m;
            int a[n][m];
           
     
            for (int i = 0; i < n ; i++){
                for (int j = 0; j < m ; j++){
                        cin >> a[i][j];
            }
        }
     
    int mx = a [0][0];
    int CoolestRowIndex = 0;
            for (int i = 0; i < n ; i++){
                for (int j = 0; j < m ; j++){
                    if (mx < a [i][j]){
                        mx = a [i][j];
                        CoolestRowIndex = i;
                        //t = 1;
            }
        }
    }
     
     
     
    for (int i = 0; i < n ; i++){
                for (int j = 0; j < m ; j++){
                    if (mx == a[i][j]){
                    s++;
                    //k = 1;
            }  
        }
    }cout << s << endl << CoolestRowIndex;
     
    return 0;
    }
