#include <iostream>
using namespace std;
bool isVowel(char t)
{
    if (t == 'a' || t == 'o' || t == 'y' || t == 'e' || t == 'u' || t == 'i')
        return true;
    return false;
}
int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
        str[i] = tolower(str[i]);

    for (int i = 0; i < str.length(); i++)
    {
        if (!isVowel(str[i]))
            cout << "." << str[i];
    }
}