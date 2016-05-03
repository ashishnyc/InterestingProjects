#include<iostream>
#include<string>

int main()
{
    { std::string s="a string";
    { std::string x = s + ", really";
      std::cout << s << std::endl; //} it ends the scope of x
      std::cout << x << std::endl;

    } // extended the scope
    }
    return 0;
}
