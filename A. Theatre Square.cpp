#include <iostream>
using std::cin, std::cout, std::endl, std::string;
int main()
{
    long long unsigned int a, b, c, c1, c2;
    cin >> a >> b >> c;
    c1 = (a / (c * 1.0)) - (a / c) == 0 ? a / c : a / c + 1;
    c2 = (b / (c * 1.0)) - (b / c) == 0 ? b / c : b / c + 1;
    cout << c1 * c2;
}