#include <iostream>
using namespace std;

// int main()
// {
//     int *p;
//     p = new int;
//     *p = 10;
//     cout << *p;
// }

class student
{
private:
    int balance = 1000;

public:
    void run(int salery)
    {
        int total = balance + salery;
        cout << total << endl;
    }
};

int main()
{
    // create pointer to the class object
    student *obj = new student();
    
    obj->run(500);   
}
