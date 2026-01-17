#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter number of elements in array: ";
    cin >> n;

    int arr[n];

    // Input
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 🔹 Sorting (Ascending Order - Bubble Sort)
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 🔹 Frequency Logic (Sorted Array)
    cout << "\nSorted Array with Frequency:\n";

    for(int i = 0; i < n; i++) {
        int count = 1;

        while(i < n - 1 && arr[i] == arr[i + 1]) {
            count++;
            i++;
        }

        cout << arr[i] << " = " << count << " times\n";
    }

    return 0;
}
