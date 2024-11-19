#include <iostream>
using namespace std;
int main()
{
    int count, n = 0;
    cin >> count;
    string s;
    cin >> s;
    for (int i = 0; i < count; i++)
    {
        if (i == count - 1)
            break;
        if (s[i] == s[i + 1])
            n++;
    }
    cout << n;
}