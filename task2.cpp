
#include <iostream>
using namespace std;

void task2()
{
    char a[50];

    cin >> a;

    for(int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == '+' || a[i] == '-' || a[i] == '*' ||
           a[i] == '/' || a[i] == '%' || a[i] == '=')
        {
            cout << "Operator: " << a[i] << endl;
        }
    }
}

