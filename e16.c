#include<stdio.h>
int main(void)
{
	long long int n,sum,t;
	scanf("%lld",&t);
	while(t--){
		long long int A[5000]={0},sum=0;
		A[0]=1;
		long long int m=1,carry=0,a;
		scanf("%lld",&n);
		for(long long int i=1;i<=n;i++)
		{
			for(long long int j=0;j<m;j++){
				a=A[j]*2+carry;
				A[j]=a%10;
				carry=a/10;
			}
			while(carry>0)
			{
				A[m]=carry%10;
				m++;
				carry/=10;
			}
		}
		for(long long int i=0;i<m;i++){
			sum+=A[i];
		}
		printf("%lld\n",sum);
	}
}


