#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x = -2, y = 2, b = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 5; i++)
        {

            int a = 0;
            cin >> a;
            if (b)
                continue;
            if (a)
            {
                b = 1;
                continue;
            }
            x++;
        }
        if (b)
            continue;
        x = -2;
        y--;
    }
    cout << abs(x) + abs(y);
}