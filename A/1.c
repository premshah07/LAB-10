#include<stdio.h>
void main(){
	int n,ld,sum=0;
	printf("enter num:");
	scanf("%d",&n);
	ld=n%10;
	while(n>=10){
		n=n/10;
	}
	sum=ld+n;
	printf("sum=%d",sum);
}
