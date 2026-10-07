#include <iostream>
using namespace std;

void task3()
{
    string str;

    cout << "Enter a line: ";
    getline(cin, str);

    if (str[0] == '/' && str[1] == '/')
    {
        cout << "It is a single line comment";
    }
    else if (str[0] == '/' && str[1] == '*')
    {
        cout << "It is a multi line comment";
    }
    else
    {
        cout << "It is not a comment";
    }

    return 0;
}

