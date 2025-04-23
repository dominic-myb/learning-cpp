#include <iostream>
#include <string>
#include <map>

int main()
{
	std::string word = "Hello";
	std::map<char, int> frequency;
	for(char c: word){
		if (c != ' '){
			c = tolower(c);
			frequency[c]++;
		}
	}
	
	for(auto pair : frequency){
		std::cout << pair.first << " : " << pair.second << std::endl;
	}
	return 0;
}
