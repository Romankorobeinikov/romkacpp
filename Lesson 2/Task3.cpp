#include <iostream>

int main()
{
    unsigned int year;
    std::cin >> year;
    if ((year%4 == 0 && year%100 != 0) || (year%400 == 0))
    {
        std::cout << "YES";
    }   else
        {
            std::cout << "NO";
        }
    return 0;
}
