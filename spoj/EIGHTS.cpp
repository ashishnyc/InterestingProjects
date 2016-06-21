#include<iostream>
#include<cmath>
using namespace std;
int nArr[] = { 192, 442, 692, 942};
int main()
{
	int t;
	long long int n;
	
	cin >> t;
	while(t--)
	{
		cin >> n;
		if(static_cast<long long>(floor((n - 1)/4.0))  != 0)
			cout << static_cast<long long>((n-1)/4.0);
		cout << nArr[(n%4 + 3)%4] << endl;
	}
	return 0;
}
