#include <iostream>
using namespace std;

class parent
{
public:
    string name = "Saran";
};

class child : public parent
{
public:
    string lastname = "Kumar";
};

int main()
{
    child obj;
    cout << obj.name << "\t" << obj.lastname;
}