#include<stdio.h>
int main(void)
{
	long long int t,n,k;
	scanf("%lld",&t);
	while(t--)
	{
		char A[10000]={0};
		scanf("%lld %lld",&n,&k);
		long long int B[10000]={0};
		long long int z=0,ans;
		scanf("%s",A);
		for(int i=0;i<=n-k;i++)
		{
			ans=1;
			for(int j=i;j<i+k;j++){
				ans=ans*(A[j]-48);
			}
			B[z]=ans;
			z++;
		}
		long long int max=B[0];
		for(int i=0;i<=z;i++){
			if(B[i]>max){
				max=B[i];
			}
		}
		printf("%lld\n",max);
	}
	return 0;
}
