#include <vector>
#include <iterator>
#include <functional>

class Testing
{
private:
    std::vector<std::function<int()>> NewVector;

public:
    std::vector<std::function<int()>>::iterator loop;
    void RegisterCallback(std::function<int()> InputValues)
    {
        NewVector.push_back(InputValues);
    }

    void CallEveryone()
    {
        for (loop = NewVector.begin(); loop != NewVector.end(); loop++)
        {
            std ::cout << (*loop)();
        }
    }
};


#include <iostream>
//#include "Testing.hpp"

int InputValues()
{
    int value ;
    std::cin >> value;
    return value;
}

int main()
{
    Testing Test;
    int size = 0;

    std::cout << "Enter The Size\n";
    std::cin >> size;
    std::cout << "Enter " << size <<" Values\n";
    while ((size--) != 0)
    {
        Test.RegisterCallback(InputValues);
       
    }
     Test.CallEveryone();
}