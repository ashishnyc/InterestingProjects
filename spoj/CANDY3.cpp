#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
	long long int t,sum = 0,n = 0,num;
	string line;
	cin >> t;
	while(t--)
	{
		sum = 0;
		cin >> n;
		for(int i =0; i < n ; ++i)
		{
			cin >> num;
			sum = (sum + num) % n; 
		}
		if(sum == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		
	}
	return 0;
}
