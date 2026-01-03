#include <iostream>
using namespace std;

int main(){
    int num;

    cout <<"Enter Any Number :";
    cin>> num;

    for(int i=1; i<=10; i++){
        cout <<endl <<num<<"+" <<i <<"="<< num+ i;
    }

}