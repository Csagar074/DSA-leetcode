#include <iostream>
using namespace std;

int main()
{
   int a=15,b=10 ,c=25;

    if (a > b)
    {
        if (a > c)
        {
            cout << "A is Big";
        }
        else
        {
            cout << "C is Big";
        }
    }
    else
    {
        if (b > c)
        {
            cout << "B is Big";
        }
        else
        {
            cout << "C is Big";
        }
    }
}
