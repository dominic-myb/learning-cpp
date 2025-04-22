#include <iostream>
#include <string>
#include <map>

int main()
{
	std::string word = "hello";
	std::map<char, int> frequency;
	for(char c: word){
		frequency[c]++;
	}
	
	for(auto pair : frequency){
		std::cout << pair.first << " : " << pair.second << std::endl;
	}
	return 0;
}
