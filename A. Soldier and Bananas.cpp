#include <iostream>
using namespace std;
int main()
{
    int k, w, n, p = 0;
    cin >> k >> w >> n;
    for (int i = 1; i <= n; i++)
    {
        p += i * k;
    }
    if (p > w)
        cout << p - w;
    else
        cout << "0";
}