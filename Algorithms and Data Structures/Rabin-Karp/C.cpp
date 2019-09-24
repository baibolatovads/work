#include <iostream>
#include <vector>
using namespace std;

int p = 31;
int p_pow[1000];
int h[1000];
int hash_t = 0;

   #define d 26 
int search(string wantToFind, string txt, int q) 
{ 
    int M = wantToFind.length(); 
    int N = txt.length(); 
    int i, j, cnt = 0; 
    int p = 0; // hash value for wantToFindtern 
    int t = 0; // hash value for txt 
    int h = 1; 
  
    // The value of h would be "pow(d, M-1)%q" 
    for (i = 0; i < M-1; i++) 
        h = (h*d)%q; 
  
    // Calculate the hash value of wantToFindtern and first 
    // window of text 
    for (i = 0; i < M; i++) 
    { 
        p = (d*p + wantToFind[i])%q; 
        t = (d*t + txt[i])%q; 
    } 
  
    // Slide the wantToFindtern over text one by one 
    for (i = 0; i <= N - M; i++) 
    { 
  
        // Check the hash values of current window of text 
        // and wantToFindtern. If the hash values match then only 
        // check for characters on by one 
        if ( p == t ) 
        { 
            /* Check for characters one by one */
            for (j = 0; j < M; j++) 
            { 
                if (txt[i+j] != wantToFind[j]) 
                    break; 
            } 
  
            // if p == t and wantToFind[0...M-1] = txt[i, i+1, ...i+M-1] 
            if (j == M) 
                //printf("wantToFindtern found at index %d \n", i); 4
            	cnt++;
        } 
  
        // Calculate hash value for next window of text: Remove 
        // leading digit, add trailing digit 
        if ( i < N-M ) 
        { 
            t = (d*(t - txt[i]*h) + txt[i+M])%q; 
  
            // We might get negative value of t, converting it 
            // to positive 
            if (t < 0) 
            t = (t + q); 
        } 
    } 
    return cnt;
} 
int main(){
	
	int n, q = 29;
	string searchme, txt;
	vector<string> v;
	while(true){
		cin >> n;
		if(n == 0) break;

		for(int i = 0; i < n; i++){
			cin >> searchme; 
			v.push_back(searchme);
		}
		cin >> txt;

		for(int i = 0; i < v.size(); i++){
			if(search(v[i], txt, q) > 1) cout << v[i] << endl;
		}
	}



	return 0;
}