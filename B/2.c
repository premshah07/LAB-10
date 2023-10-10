#include<stdio.h>
void main(){
	int n,i=2,flag=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0){
		printf("Prime Number = %d",n);
	}
	else{
		printf("Not Prime Number = %d",n);
	}
}
