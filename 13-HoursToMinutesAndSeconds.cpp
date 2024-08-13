#include <iostream>
int convert(int hours, int mins)
{
    mins += hours * 60;
    return mins * 60;
}
int main()
{
    std::cout << convert(1,10);
    return 0;
}