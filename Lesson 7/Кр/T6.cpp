#include <iostream>
#include <math.h>

int main()
{
    int i,x,a1,a2,a3,a4;
    a1 = 0;
    a2 = 0;
    a3 = 1;
    a4 = 0;
    i = 2;
    std::cin >> x;


    while(a4 <= x){
        a4 = a1 + a2 + a3;
        a1 = a2;
        a2 = a3;
        a3 = a4;
        i++;
    }
    if (x == 0) i = 2;
    std::cout << i;

    return 0;
}
