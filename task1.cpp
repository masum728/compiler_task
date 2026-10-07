#include <iostream>
using namespace std;

void task1()
{
    char a[50];
    cin >> a;

    for(int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] < '0' || a[i] > '9')
        {
            cout << "Not Numeric";
            return;
        }
    }

    cout << "Numeric Constant";
}



