#include<iostream>
using namespace std;
void ins_sort(int arr[],int n){
  for(int i=1;i<n;i++){
    int curr=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>curr){
      swap(arr[j+1], arr[j]);
      j--;
      }
     swap(arr[j+1],curr);
  }
  cout<<"after sorting"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}
int main(){
  int arr[]={13,46,24,52,20,9};
  int n= sizeof(arr)/sizeof(arr[0]);
  ins_sort(arr,n);
  return 0;
}