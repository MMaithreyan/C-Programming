#include <iostream>
#include <string.h>

using namespace std;

typedef struct Student
{
    string name;
    int age;
    int dob;
} Student;

int main()
{
     Student obj;
    cin >> obj.name;
    cout << obj.name <<endl;
}