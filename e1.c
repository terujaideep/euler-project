#include<stdio.h>
int main(void)
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int a,b,c;
		a=(n-1)/3;
		b=(n-1)/5;
		c=(n-1)/15;
		long long int x=(a*(3+3*a))/2;
		long long int y=(b*(5+5*b))/2;
		long long int z=(c*(15+15*c))/2;
		long long int ans=x+y-z;
		printf("%lld\n",ans);
	}
	return 0;
}

