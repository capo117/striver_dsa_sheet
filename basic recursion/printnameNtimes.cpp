#include<iostream>
using namespace std;
void name(int i, int n){
  if(i>n){
    return;
  }
  else{
    cout<<"lol"<<" ";
    name(i+1,n);
  }

}
int main(){
  
  cout<<"name n times"<<endl;
  name(1,45);
  return 0;
}
