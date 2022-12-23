#include<iostream>
using namespace std;
void ins_sort(int arr[],int n){
  if(n<=1)
  return;
  ins_sort(arr,n-1);
  int curr=arr[n-1];
  int i=n-2;
  while(i>=0 && arr[i]>curr){
    swap(arr[i+1],arr[i]);
    i--;
  }
  swap(arr[i+1],curr);

  
  }
  void parr(int arr[], int n){
     cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++){
      
      cout<<arr[i]<<" ";
    }
  }
 

int main(){
  int arr[]={13,46,24,52,20,9};
  int n= sizeof(arr)/sizeof(arr[0]);
  ins_sort(arr,n);
  parr(arr,n);
  return 0;
}