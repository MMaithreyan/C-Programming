#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<int, string> student;
    string name = "default";
    int age;
    // student[1] = "Revi";
    // student[2] = "John";
    // student[3] = "Jerry";
    // student[4] = "Tom";
    // student[5] = "Jerry";

    for (int i = 0; i < 3; i++)
    {
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        student.insert(pair<int, string>(age, name));
    }

    //for (map<int, string>::iterator i = student.begin(); i != student.end(); i++)
    
    for(auto &ref:student)
    {
        cout << ref.first << ":" << ref.second << endl;
    }
}