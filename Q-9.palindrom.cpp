#include<iostream>
using namespace std;

int main(){
    int num,rem,rev=0,temp;

    cout<<"Enter Any Number :";
    cin >>num;

    temp=num;
   while(num > 0){
    rem=num%10;
   rev=(rev*10)+rem;
   num=num/10;
   }

   if(temp==rev){
    cout<<temp <<"Number is Palindrom";
   }
   else{
    cout<<temp <<" Number is Not Palindrom";
   }
   return 0;
}