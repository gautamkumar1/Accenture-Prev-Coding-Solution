#include<bits/stdc++.h>
using namespace std;

int GetInversionCount(int*arr,int n){
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if( i < j && arr[i] > arr[j]) cnt++;
        }
    }
    return cnt;
}
// OPtimal Solution Using Merge Sort ModiFication

int Merge(int*A, int low, int mid, int high) {
  int i = low, j = mid, k = 0;
  int InvCnt = 0;
  int B[(high - low + 1)];
 
  while ((i < mid) && (j <= high)) {
    if (A[i] <= A[j]) {
      B[k] = A[i];
      ++k;
      ++i;
    } 
    else {
      B[k] = A[j];
      InvCnt += (mid - i);
      ++k;
      ++j;
    }
  }
 
  while (i < mid) {
    B[k] = A[i];
    ++k;
    ++i;
  }
 
  while (j <= high) {
    B[k] = A[j];
    ++k;
    ++j;
  }
 
  for (i = low, k = 0; i <= high; i++, k++) {
    A[i] = B[k];
  }
 
  return InvCnt;
}
int MergeSort(int*A, int low, int high) {
  int InvCnt = 0;
 
  if (high > low) {
    int mid = (high + low) / 2;
    InvCnt = MergeSort(A, low, mid);
    InvCnt += MergeSort(A, mid + 1, high);
    InvCnt += Merge(A, low, mid + 1, high);
  }
  return InvCnt;
}
int InversionCount(int*arr,int n){
    int ans = MergeSort(arr,0,n-1);
    return ans;
}
int main(){
    int arr[] = {13 ,10 ,9 ,6 ,21 ,15 ,14};
    int n = 7;
    cout<<InversionCount(arr,n)<<endl;
}