#include<stdio.h>
int min(int a,int b)
{
	if(a>b)
	{
		return b;
	}
	else
	{
		return a;
	}
}


long long int jai(int n,int r)
{
	long long int C[1000]={0};
	C[0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=min(r,i);j>0;j--)
		{
			C[j]=(C[j-1]+C[j])%1000000007;
		}
	}
	return C[r];
}
int main(void)
{
	long long int lol;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		lol=jai(n+m,m);
		printf("%lld\n",lol);
	}
	return 0;
}

	















