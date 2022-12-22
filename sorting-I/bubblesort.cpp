#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
  for(int i=0;i < n-1;i++){
    for(int j=0;j < n-i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
  cout<<"after sorting"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[]={13,6,46,24,52,20};
  int n= sizeof(arr)/sizeof(arr[0]);
  bubblesort(arr,n);
  return 0;
} 