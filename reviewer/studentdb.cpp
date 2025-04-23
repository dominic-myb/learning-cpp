#include <fstream>
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
      std::cerr << "Name can't be empty." << std::endl;
      return;
    }
    this->name = name;
  }
  void setAge(int age) {
    if (age <= 0 || age >= 150) {
      std::cerr << "Age must be between 1 to 150" << std::endl;
      return;
    }
    this->age = age;
  }

  void setGrade(float grade) {
    if (grade < 0 || grade > 100) {
      std::cerr << "Grade must be between 1 to 100" << std::endl;
      return;
    }
    this->grade = grade;
  }

  // Getters
  std::string getName() const { return name; }
  int getAge() const { return age; }
  float getGrade() const { return grade; }
};

void loadStudent(std::string &FILE_PATH, std::vector<Student> &student) {
  std::ifstream studentdb_file(FILE_PATH);
  if (!studentdb_file) {
    std::cerr << "Failed to open file." << std::endl;
    return;
  }
  std::string name = "";
  int age = 0;
  float grade = 0;
  while (studentdb_file >> name >> age >> grade) {
    Student s("", 0, 0);
    s.setName(name);
    s.setAge(age);
    s.setGrade(grade);
    student.push_back(s);
  }
}

void saveStudent(std::string &FILE_PATH, std::vector<Student> &student) {
  std::ofstream studentdb_file(FILE_PATH);
  if (studentdb_file.is_open()) {
    for (const Student &s : student) {
      studentdb_file << s.getName() << " " << s.getAge() << " " << s.getGrade()
                     << std::endl;
    }
    studentdb_file.close();
  }
}

int main() {
  std::string filePath = "studentdb.txt";
  std::vector<Student> student;
  int studentNum = 0;
  float threshold = 0;
  loadStudent(filePath, student);
  for (int i = 0; i < student.size(); i++) {
    std::cout << "Student #" << i+1 << '\n';
    std::cout << "Student Name: " << student[i].getName() << '\n';
    std::cout << "Student Age: " << student[i].getAge() << '\n';
    std::cout << "Student Grade: " << student[i].getGrade() << "\n\n";
  }
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
    std::cout << "Student #" << i + 1 << std::endl;
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
  }
  saveStudent(filePath, student);
  std::cout << "Enter grade threshold: ";
  while (!(std::cin >> threshold)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<int>::max(), '\n');
  }
  for (int i = 0; i < student.size(); i++) {
    if (student[i].getGrade() >= threshold) {
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
