#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements : ";
    cin >> n;

    int arr[n];
    cout << endl << endl << "Enter array elements" << endl;
    for (int x = 0; x < n; x++)
    {
        cout << "Enter arr[" << x << "] : ";
        cin >> arr[x];
    }

    int r;
    cout << "Enter r : ";
    cin >> r;

    for (int x = 0; x < r; x++)
    {
        int temp = arr[0];
        for (int y = 0; y < n - 1; y++)
        {
            arr[y] = arr[y + 1];
        }
        arr[n - 1] = temp;
    }

    cout << endl << endl << "Rotated elements are : ";
    for (int x = 0; x < n; x++)
    {
        cout << arr[x] << " ";
    }
}
