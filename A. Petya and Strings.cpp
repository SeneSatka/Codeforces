#include <iostream>
using namespace std;
int main()
{
    string t1, t2;
    cin >> t1 >> t2;
    int s = 0;
    for (int i = 0; i < t1.length(); i++)
    {
        char a = tolower(t1[i]), b = tolower(t2[i]);
        if (a > b)
        {
            s = 1;
            break;
        }
        else if (a < b)
        {

            s = -1;
            break;
        }
    }
    cout << s;
}