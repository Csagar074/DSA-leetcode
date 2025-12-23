#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter array size: ";
    cin >> size;

    int a[size];

    cout <<endl <<"Enter array elements:"<<endl;
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

    
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] == a[j]) {
                
                for (int k = j; k < size - 1; k++) {
                    a[k] = a[k + 1];
                }
                size--;
                j--;     
            }
        }
    }

    cout <<endl<< "Array after removing duplicates:"<<endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
