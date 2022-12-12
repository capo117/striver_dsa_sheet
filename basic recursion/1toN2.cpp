#include<iostream>
using namespace std;
void print(int i, int n){
  if(i>n){
    return;
  }
  else{
    cout<<i<<" ";
    print(i+1,n);
  }

}
int main(){
 print(1,65);
 return 0; 
}