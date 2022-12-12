#include<iostream>
using namespace std;
void parr(int arr[], int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
void rarr(int arr1[], int n){
  int arr[n];
  for(int i=n-1;i>=0;i--){
    arr[n-i-1]=arr1[i];
  }
  parr(arr,n);
}
int main(){
  int n=10;
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  rarr(arr,n);
  return 0;
}