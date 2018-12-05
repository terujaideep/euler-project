#include<stdio.h>
int main(void)
{
        long long int A[200000];
        long long int sum1=0;
        for(long long int i=2;i<=200000;i++){
                A[i]=i;
        }
        for(long long int i=2;i<=200000;i++)
        {
                for(long long int j=2*i;j<=200000;j+=i){
                        A[j]=0;
                }
        }
        long long int B[10000],z=0;
        for(long long int i=2;i<=200000;i++)
        {
                if(A[i]!=0)
                {
                        B[z]=A[i];
                        z++;
                }
        }
        long long int t;
        scanf("%lld",&t);
        while(t--){
                long long int n;scanf("%lld",&n);
                printf("%lld\n",B[n-1]);
        }
        return 0;
}



