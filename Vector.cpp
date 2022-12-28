#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num;

    num.assign(9, 22);

    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << endl;
    }
    cout << "``````````````````````````````````````````````````````" << endl;

    num.insert(num.begin() + 2, 50);
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << endl;
    }

    cout << "``````````````````````````````````````````````````````" << endl;

    for (auto &a : num)
    {
        cout << a << endl;
    }
}