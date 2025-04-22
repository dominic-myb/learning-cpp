#include <iomanip>
#include <iostream>
#include <limits>
#include <string>
#include <vector>
class Student {
private:
  std::string name;
  int age;
  float grade;

public:
  Student(const std::string &name, int age, double grade)
      : name(name), age(age), grade(grade) {}

  // Setters
  void setName(std::string &name) {
    if (name.empty()) {
      std::cout << "Name can't be empty." << std::endl;
      return;
    }
    this->name = name;
  }
  void setAge(int age) {
    if (age <= 0 || age >= 150) {
      std::cout << "Age must be between 1 to 150" << std::endl;
      return;
    }
    this->age = age;
  }

  void setGrade(float grade) {
    if (grade < 0 || grade > 100) {
      std::cout << "Grade must be between 1 to 100" << std::endl;
      return;
    }
    this->grade = grade;
  }

  // Getters
  std::string getName() { return name; }
  int getAge() { return age; }
  float getGrade() { return grade; }
};
int main() {
  std::vector<Student> student;
  int studentNum = 0;
  float threshold = 0;
  std::cout << "How many Students?: ";
  while (!(std::cin >> studentNum)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<int>::max(), '\n');
  }
  std::string name;
  int age;
  float grade;
  for (int i = 0; i < studentNum; i++) {
    name = "";
    age = 0;
    grade = 0;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<int>::max(), '\n');
    std::cout << "Student #" << i+1 << std::endl;
    std::cout << "Student Name: ";
    while (!(std::getline(std::cin, name))) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<int>::max(), '\n');
    }
    std::cout << "Student Age: ";
    while (!(std::cin >> age)) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<int>::max(), '\n');
    }
    std::cout << "Student Grade: ";
    while (!(std::cin >> grade)) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<int>::max(), '\n');
    }
    Student s("", 0, 0);
    s.setName(name);
    s.setAge(age);
    s.setGrade(grade);
    student.push_back(s);
    std::cout << std::endl;
  }
  std::cout << "Enter grade threshold: ";
  while(!(std::cin >> threshold)){
  	std::cin.clear();
  	std::cin.ignore(std::numeric_limits<int>::max(), '\n');
  }
  for (int i = 0; i < student.size(); i++) {
  	if (student[i].getGrade() >= threshold){
    	std::cout << "Student Name: " << student[i].getName() << std::endl;
    	std::cout << "Student Age: " << student[i].getAge() << std::endl;
    	std::cout << "Student Grade: " << std::fixed << std::setprecision(2)
              << student[i].getGrade() << std::endl;
		std::cout << std::endl;	
	}
  }
  std::cout << std::endl;
  return 0;
}
