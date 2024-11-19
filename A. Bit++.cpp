#include <iostream>
using std::cin, std::cout, std::endl, std::string;
int main()
{
    int count;
    string text;
    cin >> count;
    int x = 0;
    for (int i = 0; i < count; i++)
    {
        cin >> text;
        if (text.at(0) == 'X')
        {
            if (text.at(1) == '-')
                x--;
            else
                x++;
        }
        else
        {
            if (text.at(0) == '-')
                x--;
            else
                x++;
        }
    }
    cout << x;
}