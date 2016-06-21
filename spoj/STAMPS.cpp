#include<stdio.h>
#include<numeric>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	long int T,i;
	scanf("%ld",&T);
	for(i=0;i<T;++i)
	{
		long int N,n,sum;
		scanf("%ld %ld",&N,&n);
		vector<long int> v(n,0);
		for(long int j=0;j<n;++j)
			scanf("%ld",&v[j]);
		sum=accumulate(v.begin(),v.end(),0);
		printf("Scenario #%ld:\n",(i+1));
		if(sum < N)
		{
			printf("impossible\n\n");
			continue;
		}
		sort(v.begin(),v.end());
		long int j;
		sum=0;
		for(j=1;j<=n;++j)
		{
			sum += v[n-j];
			if(sum>=N)
				break;
		}
		printf("%ld\n\n",j);
	}
	return 0;
}
