#include <iostream>
#include <vector>
#include <functional>

class vector
{
private:
// default vector inizillation
    // std::vector<int> Vectorname;

    std::vector<std::function<int(int)>> VectorName;

public:
    void insert(std::function<int(int)>)
    {
        
    }
};
