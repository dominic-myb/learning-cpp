/*
* Author: Dominic Esguerra
* Date: Sept. 29, 2024
* Exam Date: Oct. 18, 2024
* Description: C++ Review for Upcoming DICT Diagnostic Exam
*/
#include <iostream> // Library for input/output
#include <string>
class ReviewFunctions;
/* using namespace std; - global namespace std
   using std::cout; - alternative for output only you can use (cin, endl, etc.)
*/
void helloWorld(); // this is a function declaration
void helloWorldAgain(){
    // a sample of before main function
    // used often in simple scripts
    std::cout << "Hello World Again <3" << std::endl;
}
void callerFunction();

int main(){
    callerFunction();
    return 0;
}

void callerFunction(){
    ReviewFunctions object;
    object.variableInCpp();
}
void helloWorld(){
    // a sample of a function after the main function
    // more used in larger projects
    std::cout << "Hello World!" << std::endl;
}

// * Class
class ReviewFunctions{
public:
    void variableInCpp(){
        std::string name = "Dominic Esguerra";
        char section = 'E';
        int age = 22;
        float gpa = 1.527;
        bool isMale = true;
        std::string sex;
        std::cout << "Name: " << name << "\n";
        std::cout << "Section: " << section << "\n";
        std::cout << "Age: " << age << "\n";
        sex = (isMale == true) ? "Male" : "Female";
        std::cout << "Sex: " << sex << "\n";
        std::cout << "GPA: " << gpa << "\n";
    }
private:
    void _sample(){
        std::cout<<"Hi";
    }

};