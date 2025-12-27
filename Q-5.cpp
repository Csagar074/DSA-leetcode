#include<iostream>
using namespace std;

int main(){
    int a=0,b=1,c,num;


    cout<<"Enter Any Number:";
    cin >>num;

    for(int i=0; i < num; i++){
        
        cout<<a <<" ";

        c=a+b;

        a=b;
        b=c;
    }
}