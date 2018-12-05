#include<stdio.h>
int gcd(int a, int b){
	if(b==0){
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
int main(void)
{
	int t;scanf("%d",&t);
	while(t--)
	{
		int x=1,a=2;
		int n; scanf("%d",&n);
			while(a<=n){
			x=(a*x)/gcd(a,x);
			a++;}
			printf("%d\n",x);
	}
	return 0;
}




