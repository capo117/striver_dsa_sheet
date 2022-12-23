#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
  if(n==1)
  return;
  int count=0;
  for(int i=0;i < n-1;i++){
    if(arr[i]>arr[i+1]){
      swap(arr[i],arr[i+1]);
      count++;
    }
    
      if(count==0)
      return;
      bubblesort(arr,n-1);
      
    }
  }
void parr(int arr[],int n){
  cout<<"after sorting"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[]={13,6,46,24,52,20};
  int n= sizeof(arr)/sizeof(arr[0]);
  bubblesort(arr,n);
  parr(arr,n);
  return 0;
} 