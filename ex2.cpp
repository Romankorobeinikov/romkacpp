#include <iostream>
#include <math.h>
int main()
{
    double x;
    double y;
    std::cin >> x >> y;
    double z = sqrt(x*x + y*y);
    std::cout << z;

    return 0;
}
