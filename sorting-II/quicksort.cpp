#include<iostream>
using namespace std;
int part(int arr[],int l,int h){
  int pivot=arr[h];
  int i=l-1;
for(int j=l;j<=h-1;j++){
  if(arr[j]<pivot){
    i++;
    swap(arr[i],arr[j]);

  }
}
swap(arr[i+1],arr[h]);
return (i+1);
}
void qsort(int arr[], int l, int h){
  if(l<h){
    int ind=part(arr,l,h);
    qsort(arr,l,ind-1);
    qsort(arr,ind+1,h);

  }
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
  qsort(arr,0,n-1);
  parr(arr,n);
  return 0;
}
