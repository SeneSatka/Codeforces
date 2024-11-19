#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int arr[3] = {0, 0, 0}, length = 0, pl = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '+')
            continue;
        arr[(str[i] - '0') - 1]++;
        length++;
    }

    if (str.length() > 1)
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < arr[i]; j++)
            {

                cout << i + 1;
                pl++;
                if (length == pl)
                    continue;
                cout << "+";
            }
        }
    else
        cout << str;
}