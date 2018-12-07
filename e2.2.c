#include<stdio.h>
/*long long int fibo(int i){
        if(i==0){
                return 0;}
        if(i==1){
                return 2;
        }
                else{
                        return 4*fibo(i-1) + fibo(i-2);
                }
}*/
int main(void)
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{	
		long long int n,sum=0,b,first1=2,next,first2=0;
		scanf("%lld",&n);
		for(long long int i=1;;i++)
		{
			next=4*first1+first2;
			first2=first1;
			first1=next;
			if(next<=n){
				sum+=next;
			}
			else{
				break;
			}
		}

		printf("%lld\n",sum+2);
	}
	return 0;
}

