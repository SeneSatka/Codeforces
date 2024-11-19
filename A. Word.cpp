#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int upper = 0;
    for (int i = 0; i < str.length(); i++)
        if (isupper(str[i]))
            upper++;
    if (str.length() >= 2 * upper)
    {
        for (int i = 0; i < str.length(); i++)
            cout << (char)tolower(str[i]);
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
            cout << (char)toupper(str[i]);
    }
}