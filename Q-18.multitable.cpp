#include <iostream>
using namespace std;

int main(){
    int num;

    cout <<"Enter Any Number: ";
    cin>>num;

    for(int i=1; i <=num; i++){
        cout <<num <<"*" <<i <<"=" <<num*i <<endl;
    }
}