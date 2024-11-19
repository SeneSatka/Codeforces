#include <iostream>
using std::cin, std::cout, std::endl, std::string;
int main()
{
    int count, loc, upLevelCount = 0;
    cin >> count >> loc;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < count; i++)
    {
        if (arr[loc - 1] <= arr[i] && arr[i] != 0)
            upLevelCount++;
    }
    cout << upLevelCount;
}