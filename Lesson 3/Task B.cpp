#include <iostream>
int main()
{
    int n, a, k;
    k = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> a;
        if (((a % 4 == 0)&&(a / 1000 != 4)&&(a / 1000 != 5)) or ((a % 7 == 0)&&((a / 1000 != 7) && (a / 1000 != 1))) or ((a % 9 == 0)&&((a / 1000 != 9) && (a / 1000 != 8))))
        {
            std::cout << a << std::endl;
            k = 1;
        }
    }
    if (k != 1)
    {
        std::cout << 0;
    }

    return 0;
}
