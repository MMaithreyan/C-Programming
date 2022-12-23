#include <iostream>
using namespace std;

class a
{
public:
    void run()
    {
        cout << "This is class A";
    }
};
class b : public a
{
public:
    void run()
    {
        cout << "This is class B";
    }
};

int main()
{
    b obj;
    obj.run();
    obj.a::run();
}
