#include <string>
#include <iostream>
#include <algorithm>

int main()
{
    std::string input,n;
    std::getline(std::cin, n);
    std::getline(std::cin, input);
    std::reverse(input.begin(), input.end());
    std::cout << input << std::endl;
    return 0;
}
