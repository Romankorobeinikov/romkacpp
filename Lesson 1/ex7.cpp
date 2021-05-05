#include <iostream>
#include <string>

void print_str(std::string str)
{
    std::cout << str << std::endl;
}

int main()
{
    std::string a;
    std::getline(std::cin, a);
    print_str(a);

    return 0;
}
