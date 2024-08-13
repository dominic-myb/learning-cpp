#include <iostream>
#include <string>
std::string convert(int hours)
{
    return "Minutes: " + std::to_string(hours * 60);
}
int main()
{
    std::cout << convert(1);
    return 0;
}