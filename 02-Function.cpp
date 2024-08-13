#include <iostream>
#include <string>
void myFunction(std::string name)
{
    std::cout << "My name is " << name << std::endl;
}
int main()
{
    myFunction("Dominic");
    return 0;
}
