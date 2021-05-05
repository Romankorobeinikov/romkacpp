#include <iostream>

int main()
{
    double n, a, c, d, e, fst, snd;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cin >> e;
    fst = b - a;
    snd = d / c;
    if (e == fst && e == snd)
    {
        std::cout << "5";
    } else if (e == fst || e == snd)
    {
        std::cout << "4";
    } else if (e == 1024)
    {
        std::cout << "3";
    } else
    {
        std::cout << "2";
    }

    return 0;
}
