#include <iostream>
using namespace std;
int main()
{
    int nums[26];
    for (int i = 0; i < 26; i++)
        nums[i] = 0;

    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        nums[str[i] - 97]++;
    }
    int n = 0;
    for (int i = 0; i < 26; i++)
    {
        if (nums[i] > 0)
            n++;
    }
    if (n % 2 == 1)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
}