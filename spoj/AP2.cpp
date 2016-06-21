#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
	long long int T;
	scanf("%lld",&T);
	while(T--)
	{
		long long int A,B,S,N,D,O;
		scanf("%lld %lld %lld",&A,&B,&S);
		N = (2*S)/(A+B);
		if(A!=B)
			D = (B-A)/(N-5);
		else
			D=0;
		O = (A-2*D);
		printf("%lld\n",N);
		for(long int i = 1; i< N;i++)
		{
			printf("%lld ",O);
			O+=D;
		}
		printf("%lld\n",O);
	}
	return 0;
}
