#include <link1.hpp>
void Swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Swapped Elemnets" << endl
         << " A : " << a
         << "\n B : " << b << endl;
}