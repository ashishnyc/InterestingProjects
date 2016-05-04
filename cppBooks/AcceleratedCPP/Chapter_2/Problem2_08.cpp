#include<iostream>
#include<string>

int main()
{
    long int prod=1;
    for(int i = 1; i != 10; ++i)
        prod *= i;

    std::cout << "Product of numbers in the range [1,10) is " << prod << std::endl;
    return 0;

}
