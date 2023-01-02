#include <iostream>
int main()
{
    int a = 10;
    auto display = [=](int a)
    {
        a = 15;
        std::cout << a << std::endl;
    };
    display(a);
    std::cout << a;
}