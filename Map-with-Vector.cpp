#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    map<int, vector<string>> map;

    vector<string> vec1{"hello"};
    map[1] = vec1;

    vector<string> vec2{"world"};
    map[2] = vec2;

    for (const auto &p : map)
    {
        cout << p.first << ": ";
        for (const auto &v : p.second)
        {
            cout << v << " ";
        }
        cout << endl;
    }

    // for (auto &a : map)
    // {
    //     cout << a.first;
    // }

    // for (auto &v : map)
    // {
    //     cout << v.second;
    // }

    return 0;
}
