#include <iostream>
#include <cmath>
int main()
{
    int a, n;
    float d, m;
    n = 0;
    d = 0;
    m = 0;
    std::cin >> a;
    while(a != 0)
    {
        n++;
        m += a;
        d += a*a;
        std::cin >> a;
    }
 //   std::cout << round(1000*m/n)/1000 <<  " " << round(1000*(d/n-(m/n)*(m/n)))/1000;
 std::cout << m/n <<  ".0 " << d/n-(m/n)*(m/n) << ".0";

    return 0;
}
