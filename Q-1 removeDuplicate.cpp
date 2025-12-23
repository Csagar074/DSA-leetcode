#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter array size: ";
    cin >> num;

    int a[num],b[num];
    
    cout << "Enter array elements:";
    for (int i = 0; i < num; i++) {
        cin >> a[i];
    }

    int k = 0;

    for (int i = 0; i < num; i++) {
        bool isDuplicate = false;

        for (int j = 0; j < k; j++) {
            if (a[i] == b[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            b[k] = a[i];
            k++;
        }
    }


    cout << "Array after removing duplicates:";
    for (int i = 0; i < k; i++) {
        cout << b[i] << " ";
    }

    return 0;
}
