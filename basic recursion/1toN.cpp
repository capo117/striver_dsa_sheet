#include<iostream>
using namespace std;
int print(int n){
  for(int i=0;i<n;i++)
  cout<<i<<" ";
}
int main(){
  int n=78;
  cout<<"1 to N is "<<print(n);
  return 0;
}