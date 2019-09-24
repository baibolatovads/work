#include <iostream>
#include <vector>
using namespace std;

void merge(int merged[], int lenD, int L[], int lenL, int R[], int lenR){
  int i = 0;
  int j = 0;
  while(i<lenL||j<lenR){
    if (i<lenL & j<lenR){
      if(L[i]<=R[j]){
        merged[i+j] = L[i];
        i++;
      }
      else{
        merged[i+j] = R[j];
        j++;
      }
    }
    else if(i<lenL){
      merged[i+j] = L[i];
      i++;
    }
    else if(j<lenR){
      merged[i+j] = R[j];
      j++;
    }
  }
}


void mergeSort(int data[], int lenD)
{
  if(lenD>1){
    int middle = lenD/2;
    int rem = lenD-middle;
    int* L = new int[middle];
    int* R = new int[rem];
    for(int i=0;i<lenD;i++){
      if(i<middle){
        L[i] = data[i];
      }
      else{
        R[i-middle] = data[i];
      }
    }
    mergeSort(L,middle);
    mergeSort(R,rem);
    merge(data, lenD, L, middle, R, rem);
  }
}
 

int main(){

  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
vector<int> v;
int a;

  while(cin >> a){
    v.push_back(a);
  }
int n = v.size();
int b[n];

  for(int i = 0; i < n; i++){
      b[i] = v[i];
  }
  mergeSort(b, n);

  for(int i = 0; i < n; i++){
    cout << b[i] << " ";
  }

  return 0;
}