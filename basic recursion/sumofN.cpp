#include<iostream>
using namespace std;
void sum(int n){
  int sum=0;
  //sum=n*(n+1/2)
  for(int i=0;i<=n;i++){
  sum+=i;
  }
  cout<<sum;
}
int main(){
  sum(5);
}