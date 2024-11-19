#include <iostream>
using std::cin, std::cout, std::endl, std::string;
int main()
{
    int count;
    string text;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> text;
        if (text.length() > 10)
            cout << text[0] << text.length() - 2 << text[text.length() - 1] << endl;
        else
            cout << text << endl;
    }
}