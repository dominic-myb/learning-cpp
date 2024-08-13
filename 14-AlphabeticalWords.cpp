#include <iostream>
#include <algorithm>
#include <vector>
std::string convert(std::string word)
{
    std::string res = "";
    std::vector<char> charVector(word.begin(), word.end());
    std::sort(charVector.begin(), charVector.end());
    std::string sortedWord(charVector.begin(), charVector.end());
    return sortedWord;
}
int main()
{
    std::cout << convert("python");
    return 0;
}