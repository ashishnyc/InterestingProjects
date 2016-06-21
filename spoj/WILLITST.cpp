#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	long long int N;
	scanf("%lld",&N);
	long long int n=2;
	while(n < N)
		n *= 2;

	if(n==N)
		cout << "TAK" << endl;
	else
		cout << "NIE" << endl;
	return 0;
}
