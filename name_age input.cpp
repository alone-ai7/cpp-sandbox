#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    
    std::cout << "What is your name? " << std::endl;
    std::cin >> name;
    
    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;
    
    std::cout << "Welcome " << name << std::endl;
    std::cout << age << "yrs old" << std::endl;
}
