#include<stdio.h>
long long int fibo(int i){
        if(i==0){
                return 0;}
        if(i==1){
                return 2;
        }
                else{
                        return 4*fibo(i-1) + fibo(i-2);
                }
}
int main(void)
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,sum=0,b;
		scanf("%lld",&n);
		for(long long int i=1;;i++)
		{
			b=fibo(i);
			if(b<=n){
			sum+=b;}
			else{
				break;
			}
		}
		printf("%lld\n",sum);
	}
}

