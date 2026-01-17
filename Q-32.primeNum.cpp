#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter Any number: ";
    cin >> num;

    bool prime = num > 1;
    for (int i = 2; i * i <= num && prime; i++) {
        if (num % i == 0) {
            prime = false;
        }
    }

    if (prime) {
        cout <<"Prime Number";
    } else {
        cout << "Not Prime Number";
    }
}
