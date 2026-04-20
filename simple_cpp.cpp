#include <iostream>
#include <string>

int main() {
    // Simple C++ program that demonstrates basic concepts
    
    // Declare variables
    std::string name;
    int age;
    
    // Output greeting
    std::cout << "Welcome to C++!" << std::endl;
    
    // Get user input
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    
    std::cout << "Enter your age: ";
    std::cin >> age;
    
    // Display information
    std::cout << "\nHello, " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;
    
    // Simple calculation
    int next_year_age = age + 1;
    std::cout << "Next year, you will be " << next_year_age << " years old." << std::endl;
    
    return 0;
}
