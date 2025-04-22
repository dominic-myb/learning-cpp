#include <iostream>
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x != 0 && x % 10 == 0)){
        	return false;
		}
		unsigned int reverse = 0;
		while(x > reverse){
			reverse = reverse * 10 + x % 10;
			x /= 10;
		}
		return x == reverse || x == reverse / 10;
    }
};

int main() {
	Solution sol;
	int x = 404;
	if(sol.isPalindrome(x)){
		std::cout << x << " is a palindrome.";
	}
	else {
		std::cout << x << " is not a palindrome.";
	}
	return 0;
}
