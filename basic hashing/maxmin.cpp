#include<iostream>
#include<unordered_map>
using namespace std;
void minmax(int arr[], int n){
  unordered_map<int,int>map;
  for(int i=0;i<n;i++)
    map[arr[i]]++;
   int highest = 0, lowest = n;
  for(auto x:map){
    highest=max(highest,x.first);
    lowest=min(lowest,x.first);
 
  }
  
  
   
}int main(){
  int arr[]={1,1,2,1,2,2,2,2,6,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  minmax(arr,n);
  return 0;
}
