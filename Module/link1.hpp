#include "iostream"
#include "string"
#pragma once

using std::cout;
using std::string;

class Temperature
{
public:
   virtual void run(string name, string lastname) = 0;
};
