#include <iostream>
using namespace std;

int main(){
    int n;
    int temp=1;

    cout <<"Enter Any Number :";
    cin >>n;

    while(n >=1){
        temp=temp*n;
    
        n--;
    }
     cout<<"Fectoriale Number:" <<temp;
}