#include<stdio.h>
int main(void){
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int sum=0;
		long long int n;scanf("%lld",&n);
		for(long long int i=3;i<n;i++){
			if(i%3==0 || i%5==0){
				sum+=i;}
		}
		printf("%lld",sum);
	}
}
