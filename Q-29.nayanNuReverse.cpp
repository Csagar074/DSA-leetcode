#include <iostream>
using namespace std;

int main(){
string name, reverse=" ";

cout <<"Enter Any Name :";
cin >>name;

for(int i= name.length()-1; i >=0; i--){
   reverse =reverse +name[i];
}

cout <<reverse;
}