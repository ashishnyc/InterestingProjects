#include<iostream>
using namespace std;

unsigned long long int combination(unsigned long long int n, unsigned long long int k)
{
	if(k > (n/2))
		k = n - k;
	
	unsigned long long int res=1, dem = 1;
	for(unsigned long long int i = 0; i < k; i++)
	{
		dem = i+1;
		if( res%dem  == 0)
		{
			res /= dem;
			dem = 1;
		}
		res *= (n--);
		res /= dem;
	}
	return res;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long long int N,K,n,r;
		cin >> N >> K;
		r = N-K;
		n = K + r - 1;
		cout << combination(n,r) << endl;
	}
	return 0;
}
