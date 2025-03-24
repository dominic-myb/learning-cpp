#include <iostream>
#include <string>

int main() {
  int age = 22;
  float grade = 1.00;
  bool isMale = true;
  char bloodType = 'A';
  std::string name = "Dominic";
  std::cout << "My name is " << name << std::endl;
  std::cout << "I am " << age << " years old." << std::endl;
  std::cout << "My average grade is " << grade << std::endl;
  std::cout << "I am ";
  std::cout << (isMale ? "Male" : "Female");
  std::cout << std::endl;
  std::cout << "My blood type is " << bloodType << std::endl;
  return 0;
}