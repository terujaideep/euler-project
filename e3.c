#include<stdio.h>
void factor(long long int n)
{
	long long int A[500]={0};
	long long int z=1;
	while(n%2==0){
		A[0]=2;
		n=n/2;
	}
	for(long long int i=3;i*i<=n;i+=2)
	{
		while(n%i==0)
		{
			A[z]=i;
			n=n/i;
	}
	z++;
	}
	if(n>2)
	{
		A[z]=n;
	}
	long long int max=A[0];
	for(int i=0;i<=z;i++){
		if(A[i]>max){
			max=A[i];
		}
	}
		printf("%lld\n",max);
	return ;
}
int main(void)
{
	long long int n;
	long long int t;scanf("%lld",&t);
	while(t--){
	scanf("%lld",&n);
	factor(n);
	}
	return 0;
}

