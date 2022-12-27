#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cars[4] = {"car","car","car","car",};

    for (string i : cars)
    {
        cout << i;
    }
    return 0;
}
