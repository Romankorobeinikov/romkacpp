#include <iostream>
#include <math.h>

int main()
{
    int i,x;
    float m1,m2,f1,f2;

    m1 = 40;
    f1 = 70;
    i = 0;
    std::cin >> x;

    for(i = 1; i<x; i++){

       m2 = 0.3*(100 + 2*(f1)) + 10;
       f2 = 0.7*(100 + 2*(f1));
       f1 = f2;
    }
    std::cout << int(m2);


    return 0;
}
