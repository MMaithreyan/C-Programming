#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    map<int, vector<int>> student;

    vector<int> vec1{10, 20, 30};
    student[1] = vec1;

    vector<int> vec2{110, 120, 130};
    student[2] = vec2;

    map<int, vector<int>>::iterator m;
    vector<int>::iterator v;

    for (m = student.begin(); m != student.end(); m++)
    {
        cout << m->first;

        for (v = m->second.begin(); v != m->second.end(); v++)
        {
            cout << *v;
        }
        cout << endl;
    }
    // for (auto &p : map)
    // {
    //     cout << p.first << ": ";
    //     for (auto &v : p.second)
    //     {
    //         cout << v << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
