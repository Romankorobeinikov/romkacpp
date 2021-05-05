#include <iostream>

int main()
{
    int a;
    int i = 0;

    while (a != 0)
    {
        i = (a%2 == 0)? i + 1: i;
        std::cin >> a;

    }
    std::cout << i-1;
    return 0;
}
