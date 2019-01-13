#include<stdio.h>
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;}
}
struct jai{
	int A[100];
}B[100];
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--){
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
		scanf("%d",&B[i].A[j]);}
	}
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<i+1;j++){
		B[i].A[j]=B[i].A[j]+max(B[i+1].A[j],B[i+1].A[j+1]);
		}
	}
	printf("%d\n",B[0].A[0]);
	}
	return 0;
}





