// triangle
#include <iostream>
#include <string>

int main()
{
    int triangleSize = 20;
    for (int x = 0; x < triangleSize; x++)
    {
        for (int y = x; y < triangleSize; y++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}