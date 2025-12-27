#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 1, 2, 5, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    int missing = expectedSum - actualSum;

    cout << "Missing number is: " << missing;
    return 0;
}
