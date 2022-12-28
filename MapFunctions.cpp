#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<int, int> data;

    data[1] = 111;
    data[2] = 222;
    data[3] = 333;
    data[55] = 444;
    data[5] = 555;

    data.insert(pair<int, int>(6, 666));
    data.insert(pair<int, int>(7, 777));
    data.insert(pair<int, int>(58, 888));
    data.insert(pair<int, int>(9, 999));
    data.insert(pair<int, int>(0, 1000));

    map<int, int>::iterator i;

    for (i = data.begin(); i != data.end(); i++)
    {
        cout << i->first << " = " << i->second << endl;
    }

    cout << "``````````Change to Another Map ```````````" << endl;

    map<int, int> data2(data.begin(), data.end());

    for (i = data2.begin(); i != data2.end(); i++)
    {
        cout << i->first << " = " << i->second << endl;
    }

    cout << "``````````Find Function ```````````" << endl;

    cout << data2.find(3)->first << data2.find(3)->second << endl;
}