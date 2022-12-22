#include<iostream>
using namespace std;
void sel_sort(int arr[], int n){
  for(int i=0;i<n-1;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[min]){
        min=j;
      }
    }
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;    
  }
  cout<<"after sorting"<<endl;
  for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
  }

}
int main(){
  int arr[]={13,46,24,52,20,9};
  int n= sizeof(arr)/sizeof(arr[0]);

  sel_sort(arr,n);
  return 0;
}