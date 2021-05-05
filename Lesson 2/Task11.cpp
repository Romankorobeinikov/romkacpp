#include <iostream>

int main()
{
    unsigned int a, b, ca, cb;
    std::cin >> a >> b;
    ca = a;
    cb = b;

    while(a != 0 && b != 0)
    {
        if (a > b)
        {
            a %= b;
        } else
        {
            b %= a;
        }

    }
    std::cout << ca * cb / (a + b);


    return 0;
}
