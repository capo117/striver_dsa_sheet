#include<iostream>
using namespace std;
void print(int i, int n){
  if(i<1){
    return;
  }
  else{
    cout<<i<<" ";
    print(i-1,n);
  }

}
int main(){
 print(65,65);
 return 0; 
}