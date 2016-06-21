#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long int N,i=0,sum=0,prev;
		scanf("%ld",&N);
		while(++i)
		{
			prev=sum;
			sum+=i;
			if(sum>=N && N>prev)
				break;
		}
		long int num=1,nD=1,dem=1,dD=1;
		if(i%2==0)
		{
			dem=i;
			dD=-1;
		}
		else
		{
			num=i;
			nD=-1;
		}	
		for(long int j=1;j<(N-prev);++j)
		{
			num+=nD;
			dem+=dD;
		}
		printf("TERM %ld IS %ld/%ld\n",N,num,dem);
	}
	return 0;
}
