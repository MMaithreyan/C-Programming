#include <iostream>
#include <vector>
#include <functional>

class vector
{
private:
    // std::vector<int> Vectorname;

    std::vector<std::function<int(int)>> VectorName;

public:
    void insert(std::function<int(int)>)
    {
        
    }
};
