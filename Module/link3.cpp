#include <iostream>
#include "link1.hpp"
#include "link2.hpp"

using std ::cin;
using std ::cout;
using std ::endl;
// using namespace std;

int main()
{
     int firstVal;
     int secondVal;

     cout << "ENTER THE VALUES\n";
     cin >> firstVal >> secondVal;

     Access1 obj1;
     Access2 obj2;
     cout << "Class Access1 : " << endl
          << "Digit : " << obj1.digit << endl;
     obj1.Swap(firstVal, secondVal);
     cout << "Class Access2 : " << endl
          << "DigitVal : " << obj2.digitVal << endl;
     obj2.Run(firstVal, secondVal);
}