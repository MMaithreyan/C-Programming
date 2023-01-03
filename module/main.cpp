#include "iostream"
#include "link1.hpp"
#include "link2.hpp"

int main()
{
    // Temperature *temObj;
    // Humidity humObj;
    // temObj = &humObj;

    Temperature *temObj = new Humidity();

    temObj->run("John", "Wick");
    temObj->run("Dinesh", "Kumar");
}