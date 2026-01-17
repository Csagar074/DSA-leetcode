#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout <<"Enter a and b Values :";
    cin >>a >>b;

    a = a+b;
    b = a-b;
    a = a-b;
    
    cout <<"A value:"<<a <<endl <<"B value :" <<b<<endl;


}