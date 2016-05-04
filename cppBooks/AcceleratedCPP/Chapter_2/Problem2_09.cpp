#include<iostream>
#include<string>

int main()
{
    int num1, num2;
    std::cout << "Please enter 1st Number: ";
    std::cin >> num1;
    std::cout << "Please enter 2nd Number: ";
    std::cin >> num2;
    
    if(num1 > num2)
        std::cout << "Number 1 is greater than Number 2";
    else if(num1 == num2)
        std::cout << "Number 1 is equal to Number 2";
    else
        std::cout << "Number 1 is smaller than Number 2";

    std::cout << std::endl;
    return 0;
}
