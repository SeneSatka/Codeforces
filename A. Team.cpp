#include <iostream>
using std::cin, std::cout, std::endl, std::string;
int main()
{
    int count;
    int num = 0;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) > 1)
            num++;
    }
    cout << num;
}