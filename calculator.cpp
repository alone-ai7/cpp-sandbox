#include <iostream>
#include <string>

int main(){
	int first_digit = 0;
	int second_digit = 0;
	std::string operators = " ";
	std::cout << "Enter your first number: ";
	std::cin >> first_digit;
	std::cout << "Enter your second_digit: ";
	std::cin >> second_digit;
	std::cout << "Choose your operators: + | - | * | / |: "; 
	std::cin >> operators;

	if(operators == "+"){
		std::cout << first_digit + second_digit;
	}	
	else if(operators == "-"){
		std::cout << first_digit - second_digit;
	}
	else if(operators == "*"){
		std::cout << first_digit * second_digit;		
	}
	else if(operators == "/"){
		std::cout << first_digit / second_digit;
	}
	return 0;
}
