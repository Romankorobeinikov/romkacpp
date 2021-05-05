#include <iostream>
#include <math.h>

int main()
{
    int x;
    std::cin >> x;
    int ans = x/100 + x/10 - 10*int(x/100) + x%10;
    std::cout << ans;

    return 0;
}
