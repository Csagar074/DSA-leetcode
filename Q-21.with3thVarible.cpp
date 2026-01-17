#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    cout <<"Enter a Number :";
    cin>>a;

    cout <<"Enter b Nuber :";
    cin >>b;

   c=a;
   a=b;
   b=c;

    cout <<"A Nuber: "<<a <<endl;
    cout <<"B Nuber :"<<b;
}