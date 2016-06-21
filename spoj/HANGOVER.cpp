#include<iostream>

using namespace std;

int main()
{
	double N;
	while(true)
	{
		cin >> N;
		if((N - 0.00) < 0.01)
			break;

		int c=2;
		double prev = 0.0,curr=1.00/c;
		while(true)
		{
			if(prev < N && N < curr)
				break;

			c++;
			prev = curr ;
			curr += (1.00/c);
		}

		cout << (c-1) << " card(s)" << endl;
	}
	return 0;
}
