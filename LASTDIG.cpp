#include<iostream>
#include <math.h>

long int power(int a, int b)
{
	long int result=1;
	for (int i = 0; i < b; i++)
		result *= a;
	return result;
}

int main()
{
	int t,a,temp;
	long int b;

	std::cin >> t;
	while (t--)
	{
		std::cin >> a >> b;

		if (b == 0)
			std::cout << 1 << std::endl;
		else if(a == 0)
			std::cout << 0 << std::endl;
		else
		{
			temp = b % 4;
			if(temp == 0)
				std::cout << (power(a, 4) % 10) << std::endl;
			else
				std::cout << (power(a, temp) % 10) << std::endl;
		}
	}

}