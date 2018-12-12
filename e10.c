#include<stdio.h>
int main(void)
{
        long long int A[1000000],sum,z=1,ans;
        long long int B[10000];
        long long int sum1=0;
        for(long long int i=2;i<1000000;i++){
                A[i]=i;
        }
        for(long long int i=2;i<=1000000;i++)
        {
                for(long long int j=2*i;j<=1000000;j+=i){
                        A[j]=0;
                }
        }
        for(long long int i=3;i<1000000;i++){
                        A[i]=A[i]+A[i-1];

                }
        long long int t;scanf("%lld",&t);
        while(t--){
                long long int n;scanf("%lld",&n);
                printf("%lld\n",A[n]);
                }

        return 0;
}




