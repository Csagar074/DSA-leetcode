#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int tar = 5;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if(arr[i] + arr[j] == tar) {
                cout << i << " , " << j << endl;
            }
        }
        
    }
    
}