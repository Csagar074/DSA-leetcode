#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 3, 0, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int b = 0; // index for next non-zero position

    for (int a = 0; a < n; a++) {
        if (arr[a] != 0) {
            // swap arr[a] and arr[b]
            int temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;
            b++;
        }
    }

    // print result
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
