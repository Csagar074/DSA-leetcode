#include <iostream>
using namespace std;

// out: 0,1,1,2,3,5,8,13.....
int main(){
  int a=0,b=1,c;
  int num;

  cout<<"Enter Any Number :";
  cin>>num;

   cout <<a <<" " <<b <<" ";
  for(int i=0; i < num; i++){
   

    c=a+b;
     cout <<c <<" ";
    a=b;
    b=c;
     
  }
}