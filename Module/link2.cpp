#include <link2.hpp>
void Run(int a, int b)
{
    a = a + b;
    b = a + b;
    cout << "A : " << a
         << "\nB : " << b;
}