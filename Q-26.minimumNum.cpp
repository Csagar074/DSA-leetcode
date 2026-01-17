#include <iostream>
using namespace std;

int main()
{
    int a = 18, b = 10, c = 20;

    if (a < b)
    {
        if (a < c)
        {
            cout << "A is Min";
        }
        else
        {
            cout << "C is min";
        }
    }
    else
    {
        if (b < c)
        {
            cout << "B is Min";
        }
        else
        {
            cout << "C is min";
        }
    }
}