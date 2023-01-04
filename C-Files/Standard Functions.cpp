#include <iostream>
#include <functional>

void foo(int value)
{
    std::cout << value << std::endl;
};

int main()
{
    std::function<void(int)> f=foo;
    f(55);
    // foo(33);
    f(22);
}