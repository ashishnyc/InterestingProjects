#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int count=0;
	for(int i = 1 ; i <= N; ++i)
	{
		for(int j = i; j <= N; ++j)
		{
			if(i*j > N)
				continue;
			count++;
		}
	}
	cout << count << endl;	
	return 0;
}

