#include <iostream>
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
        int array[10] = {0};
        int itr = 0;

        for (loop = NewVector.begin(); loop != NewVector.end(); loop++)
        {
            // std ::cout << (*loop)();
            array[itr] = (*loop)();
            itr++;
        }
        for (int i = 0; i < itr; i++)
        {
            std::cout << "->" << array[i] << std::endl;
        }
    }
};
int InputValues()
{
    int value;
    std::cin >> value;
    return value;
}

int main()
{
    Testing Test;
    int size = 0;

    std::cout << "Enter The Size\n";
    std::cin >> size;
    std::cout << "Enter " << size << " Values\n";
    for (int i = 0; i < size; i++)
    {
        Test.RegisterCallback(InputValues);
    }
    Test.CallEveryone();
}