#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, rem;
    int sum = 0;

    cout << "Enter any number: ";
    cin >> num;

    temp = num;

    // Count digits
    int digits = 0;
    int n = num;
    while(n > 0){
        n /= 10;
        digits++;
    }

    // Calculate Armstrong sum
    n = num;
    while(n > 0){
        rem = n % 10;
        sum += pow(rem, digits);
        n /= 10;
    }

    if(sum == temp){
        cout << temp << " is an Armstrong Number";
    } else {
        cout << temp << " is NOT an Armstrong Number";
    }

    return 0;
}
