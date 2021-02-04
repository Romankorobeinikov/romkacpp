#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    for (int i = n; i > 0; i = i - 2)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
        for (int k = 0; k <= (n - i)/2; k++)
        {
            std::cout << " ";
        }
    }

    return 0;
}
