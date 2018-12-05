#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	long long int t;scanf("%lld",&t);
	while(t--)
	{
		long long int sum=0,n;
		scanf("%lld",&n);
		for(long long int i=1;i<=n;i++){
			sum+=(i*i*i)-(i*i);
		}
		printf("%lld\n",sum);
	}
	return 0;
}
