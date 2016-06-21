#include<stdio.h>
#include<vector>
using namespace std;
long long int BinarySearch(vector<long long int>& v, long long int l, long long int r, long long int sn)
{
	if(l<=r)
	{
		long long int mid= (l+r)/2;

		if(sn==v[mid]) return mid;
		else if(sn < v[mid]) return BinarySearch(v,l,mid-1,sn);
		else return BinarySearch(v,mid+1,r,sn);
	}
	return -1;
}

int main()
{
	long long int N,Q;
	scanf("%lld %lld",&N,&Q);
	vector<long long int> v(N,0);
	for(long long int i=0;i<N;++i)
		scanf("%lld",&v[i]);
	
	while(Q--)
	{
		long long int sn;
		scanf("%lld",&sn);
		printf("%lld\n",BinarySearch(v,0,N-1,sn));
	}
	return 0;
}
