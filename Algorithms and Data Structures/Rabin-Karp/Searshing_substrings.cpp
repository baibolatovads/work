#include <bits/stdc++.h>
using namespace std;
/* wantToFind -> wantToFind
    txt -> text 
    q -> A prime number 
*/
    #define d 26 
void search(string wantToFind, string txt, int q) 
{ 
    int M = wantToFind.length(); 
    int N = txt.length(); 
    int i, j; 
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
                printf("wantToFindtern found at index %d \n", i); 
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
} 
  
/* Driver program to test above function */
int main() 
{ 
    string txt;
    cin >> txt;
    string wantToFind;
    cin >> wantToFind;
    int q = 29; // A prime number 
    search(wantToFind, txt, q); 
    return 0; 
} 