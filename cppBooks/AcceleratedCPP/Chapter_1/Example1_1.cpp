#include<iostream>
#include<string>

int main()
{
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name; // Starts reading from Last Space Before Character and reads till next space
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}
