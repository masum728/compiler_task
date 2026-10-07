#include <iostream>
using namespace std;

int main()
{
    string str;
    int i;

    cout << "Enter an identifier: ";
    cin >> str;

    if ((str[0] >= 'A' && str[0] <= 'Z') ||
        (str[0] >= 'a' && str[0] <= 'z') ||
        str[0] == '_')
    {
        for (i = 1; str[i] != '\0'; i++)
        {
            if (!((str[i] >= 'A' && str[i] <= 'Z') ||
                  (str[i] >= 'a' && str[i] <= 'z') ||
                  (str[i] >= '0' && str[i] <= '9') ||
                  str[i] == '_'))
            {
                cout << "It is not an identifier";
                return 0;
            }
        }

        cout << "It is an identifier";
    }
    else
    {
        cout << "It is not an identifier";
    }

    return 0;
}

