#include <iostream>

int main()
{
    int a, i; //a - число, подающееся на ввод. i - счетчик степени
    std::cin >> a;
    while (a != 1 && i != -1)
    {
        i = (a % 2 == 0)? i + 1: -1;
        a = a / 2;
    }
    if (i == -1)
    {
        std::cout << "NO";
    }   else 
        {
		if (a == 1)
		{
            std::cout << "YES";
		}
        }

    return 0;
}
